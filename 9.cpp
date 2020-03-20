/*
题目描述
输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

输入描述:
输入一个int型整数

输出描述:
按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

示例1
输入
复制
9876673
输出
复制
37689

*/


#include <iostream>


int main()
{
    int origin_temp;
    scanf("%d", &origin_temp);
    int bucket[10] = {0};
    while(origin_temp)
    {
        int one_num = origin_temp % 10;
        if (bucket[one_num] == 0)
        {
            printf("%d", one_num);
            bucket[one_num] = 1;
        }
        
        origin_temp = origin_temp / 10;
    }
    
    return 0;
}





