/*
题目描述
计算字符串最后一个单词的长度，单词以空格隔开。
输入描述:
一行字符串，非空，长度小于5000。

输出描述:
整数N，最后一个单词的长度
*/
#include <stdio.h>



int main()
{
    
    int word_len = 0;
    int last_word_len = 0;
    char char_temp ;
    while(1)
    {
        char_temp = getchar();
        if (char_temp == '\n')
        {
            last_word_len = word_len;
            break;
        }
        else if(char_temp != ' ')
        {
            word_len++;
        }
        else
        {
            last_word_len = word_len;
            word_len = 0;
        }
    }
    
    printf("%d\n", last_word_len);
    
    return 0;
}