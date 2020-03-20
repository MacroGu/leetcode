#include <iostream>
#include <string>


/*
题目描述
写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。

输入描述:
第一行输入一个有字母和数字以及空格组成的字符串，第二行输入一个字符。

输出描述:
输出输入字符串中含有该字符的个数。
*/

int main()
{
    
    std::string origin_str = "";
    std::cin >> origin_str;
    char find_char;
    std::cin >> find_char;
    char other_char;
    if (find_char >= 'a' && find_char <= 'z')
    {
        other_char = find_char - ('a' - 'A');
    }
    else if(find_char >= 'A' && find_char <= 'Z') 
    {
        other_char = find_char + ('a' - 'A');
    }
    
    int same_nums = 0;
    for (int i = 0; i < origin_str.length(); i++)
    {
        if (origin_str.at(i) == other_char || origin_str.at(i) == find_char)
        {
            same_nums++;
        }
    }
    
    std::cout << same_nums << std::endl;
    
    return 0;
}