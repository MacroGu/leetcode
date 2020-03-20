/*
	题目描述
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。

输入描述:
输入N个字符，字符在ACSII码范围内。

输出描述:
输出范围在(0~127)字符的个数。

示例1
输入
复制
abc
输出
复制
3

*/

#include <stdio.h>




int main()
{
    int total_num = 0;
    int bucket[128] = {0};
    while(true)
    {
        char temp_char = getchar();
        if (temp_char == '\n')
        {
            break;
        }
        
        int temp_int = static_cast<int>(temp_char);
        if (temp_int >= 0 and temp_int <= 127)
        {
            if (bucket[temp_int] == 0)
            {
                bucket[temp_int] = 1;
            }
        }
    }
    
    
    for (int i = 0; i < 128; i++)
    {
        if (bucket[i] != 0)
        {
            total_num++;
        }
    }
    
    printf("%d", total_num);
    return 0;
}
