/*
题目描述
数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。

输入描述:
先输入键值对的个数
然后输入成对的index和value值，以空格隔开

输出描述:
输出合并后的键值对（多行）

示例1
输入
复制
4
0 1
0 2
1 2
3 4
输出
复制
0 3
1 2
3 4
*/

#include <iostream>
#include <unordered_map>




int main()
{
    int pair_nums = 0;
    std::cin >> pair_nums ;
    
    // 第一步去重
    std::unordered_map<int, int> all_pairs;
    for (int i = 0; i < pair_nums; i++)
    {
        int key = 0;
        int value = 0;
        std::cin >> key >> value ;
        all_pairs[key] = all_pairs[key] + value;
    }
    
    int pair_size = all_pairs.size();
    int* key_sort = new int[pair_size];
    int* value_sort = new int[pair_size];
    int pos = 0;
    for (auto one_pair : all_pairs)
    {
        key_sort[pos] = one_pair.first;
        value_sort[pos] = one_pair.second;
        pos++;
    }
    
    
    // sort
    for (int i = 0; i < pair_size; i++)
    {
        int j = i + 1;
        while(j < pair_size)
        {
            if (key_sort[j] < key_sort[i])
            {   // swap
                int key_temp = key_sort[i];
                key_sort[i] = key_sort[j];
                key_sort[j] = key_temp;
                
                int value_temp = value_sort[i];
                value_sort[i] = value_sort[j];
                value_sort[j] = value_temp;
            }
            j++;
        }
    }
    
    for(int i = 0 ; i < pair_size; i++)
    {
        std::cout << key_sort[i] << " " << value_sort[i] << std::endl;
    }
    
    delete[] key_sort;
    delete[] value_sort;
    
    return 0;
}

