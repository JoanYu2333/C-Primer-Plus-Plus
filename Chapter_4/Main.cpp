/**
 * @File Name: Main.cpp
 * @Brief : 
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-01-12
 * 
 */

#include "Head.h"

int main()
{
    Example_4();
    system("pause");
    return 0;
}

void Example_1()
{
    std::string First_name, Last_name;
    char score;
    int age;

    std::cout << "What is your first name? ";
    std::getline(std::cin, First_name);
    std::cout << "What is your last name? ";
    std::getline(std::cin, Last_name);
    std::cout << "What letter grade do you desrve? ";
    std::cin >> score;
    score += 1;
    std::cout << "What is your age? ";
    std::cin >> age;
    std::cout << "Name: " << Last_name << ", " << First_name << std::endl;
    std::cout << "Grade: " << score << std::endl;
    std::cout << "Age: " << age;
}

void Example_2()
{
    std::string First_name, Last_name;
    char score;
    int age;

    std::cout << "What is your first name? ";
    std::getline(std::cin, First_name);
    std::cout << "What is your last name? ";
    std::getline(std::cin, Last_name);
    std::cout << "What letter grade do you desrve? ";
    std::cin >> score;
    score += 1;
    std::cout << "What is your age? ";
    std::cin >> age;
    std::cout << "Name: " << Last_name << ", " << First_name << std::endl;
    std::cout << "Grade: " << score << std::endl;
    std::cout << "Age: " << age;
}

void Example_3()
{
    using namespace std;
    char First_name[20]{};
    char Last_name[40]{};
    cout << "Enter your first name: ";
    cin >> First_name;
    cout << "Enter your last name: ";
    cin >> Last_name;
    strcat(Last_name, ", ");
    strcat(Last_name, First_name);
    cout << "Here's the information in a single string: " << Last_name;
}

void Example_4()
{
    using namespace std;
    string Name_First;
    string Name_Last;
    string Name_Globle;
    cout << "Enter your first name: ";
    cin >> Name_First;
    cout << "Enter your last name: ";
    cin >> Name_Last;
    Name_Globle = Name_Last + ", " + Name_First;
    cout << "Here's the information in a single string: " << Name_Globle;
}
