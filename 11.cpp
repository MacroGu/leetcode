/*
题目描述
描述：

输入一个整数，将这个整数以字符串的形式逆序输出

程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001


输入描述:
输入一个int整数

输出描述:
将这个整数以字符串的形式逆序输出

示例1
输入
复制
1516000
输出
复制
0006151

*/
#include <iostream>
#include <stdio.h>
#include <string>




int main()
{
    
    char max_num[64];
    int cur_pos = 0;
    while(true)
    {
        max_num[cur_pos] = getchar();
        if (max_num[cur_pos] == '\n')
        {
            break;
        }
        cur_pos++;
    }
    
    for (int i = cur_pos - 1; i >= 0; i--)
    {
        printf("%c", max_num[i]);
    }
    
    
    return 0;
}

