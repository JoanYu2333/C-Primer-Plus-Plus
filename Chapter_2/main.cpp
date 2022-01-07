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
    Example_7(9, 28);
    system("pause");
    return 0;
}

void Example_1(void)
{
    std::cout << "Name is : "
              << "YU JOAN" << std::endl
              << "Address is : "
              << "China";
}

void Example_2(void)
{
    std::cout << "Press the distance" << std::endl;
    int a = 0;
    std::cin >> a;
    std::cout << a * 220;
}

void Example_3(void)
{
    std::cout << "Three build mice" << std::endl
              << "Three build mice" << std::endl
              << "See how they run" << std::endl
              << "See how they run";
}

void Example_4(void)
{
    int age;
    std::cout << "Enter your Age : ";
    std::cin >> age;
    std::cout << age * 12;
}

void Example_5(void)
{
    float tempreture;
    std::cout << "Please enter a Celsius value : ";
    std::cin >> tempreture;
    std::cout << tempreture << " degress Celsius is " << tempreture * 1.8 + 32 << " degrees Fahrenheit";
}

void Example_6(void)
{
    double time;
    std::cout << "Enter the number of light years : ";
    std::cin >> time;
    std::cout << time << " light years = " << time * 63240 << " astronnmical units";
}

void Example_7(int hours, int minutes)
{
    std::cout << "Enter the number of hours : " << hours << std::endl;
    std::cout << "Enter the number of minutes : " << minutes << std::endl;
    std::cout << "Time: " << hours << ":" << minutes;
}
