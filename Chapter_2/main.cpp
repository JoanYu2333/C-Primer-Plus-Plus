/**
 * @File Name: main.c
 * @Brief : 
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-01-06
 * 
 */

#include "head.h"

int main()
{
    Example_1();
    std::cin.get();
    return 0;
}

/**
 * @Brief : 显示姓名和地址
 */
void Example_1(void)
{
    std::cout << "Name is : "
              << "YU JOAN" << std::endl
              << "Address is : "
              << "China";
}