/*
题目描述
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）

输入描述:
输入N个字符

输出描述:
输出该字符串反转后的字符串

示例1
输入
复制
abcd
输出
复制
dcba
*/

#include <stdio.h>
#include <iostream>



int main()
{
    char source_char[1000];
    int cur_pos = 0;
    while(true)
    {
        source_char[cur_pos] = getchar();
        if (source_char[cur_pos] == '\n')
        {
            break;
        }
        cur_pos++;
    }

    for (int i = cur_pos - 1; i >= 0; i--)
    {
        std::cout << source_char[i];
    }
    
    return 0;
}


