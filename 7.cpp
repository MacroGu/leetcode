/*
题目描述
写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。

输入描述:
输入一个正浮点数值

输出描述:
输出该数值的近似整数值

示例1
输入
复制
5.5
输出
复制
6
*/

#include <iostream>



int main()
{
    float input_data; 
    std::cin >> input_data;
    int int_part = input_data * 10;
    if (int_part % 10 >= 5)
    {
        int_part = int_part / 10;
        int_part += 1;
    }
    else
    {
        int_part = int_part / 10;
    }
    
    std::cout << int_part << std::endl;
    
    
    return 0;
}