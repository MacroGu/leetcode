/*
题目描述
功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（如180的质因子为2 2 3 3 5 ）

最后一个数后面也要有空格

详细描述：


函数接口说明：

public String getResult(long ulDataInput)

输入参数：

long ulDataInput：输入的正整数

返回值：

String



输入描述:
输入一个long型整数

输出描述:
按照从小到大的顺序输出它的所有质数的因子，以空格隔开。最后一个数后面也要有空格。

示例1
输入
复制
180
输出
复制
2 2 3 3 5
*/


#include <string>
#include <iostream>

bool isPrime(long number)
{
    for (long i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

std::string getResult(long ulDataInput)
{

    long input_number = ulDataInput;
    std::string out_put = "";
    if (isPrime(input_number))
    {
        out_put = out_put + std::to_string(input_number);
        out_put = out_put + " ";  
        return out_put;
    }
        
    int pos = 2;
    while(true)
    {
        while(input_number % pos == 0)
        {
            out_put = out_put + std::to_string(pos);
            out_put = out_put + " ";
            input_number = input_number / pos;
            if (pos > input_number)
            {
                return out_put;
            }               
        }
        
        pos++;
        while(!isPrime(pos))
        {
            pos++;
            if (pos > input_number)
            {
                return out_put;
            }
        }
    }
    
    return out_put;
}


int main()
{
    long input;
    std::cin >> input;
    std::cout << getResult(input) << std::endl;
    
    return 0;
}
