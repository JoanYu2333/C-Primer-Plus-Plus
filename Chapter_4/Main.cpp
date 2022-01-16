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
    Example_7();
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

void Example_5()
{
    using namespace std;
    struct CandyBar
    {
        string model;
        float height;
        int kaluri;
    };
    CandyBar snack = {"Mocha Munch",
                      2.3,
                      350};
    cout << snack.height << endl
         << snack.kaluri << endl
         << snack.model;
}

void Example_6()
{
    using namespace std;
    struct CandyBar
    {
        string model;
        float height;
        int kaluri;
    } snack[3] = {{"Mocha Munch",
                   2.3,
                   350},
                  {"Mocha Munch",
                   3.5,
                   350},
                  {"Mocha Munch",
                   6.5,
                   350}};
    cout << snack[0].height << endl
         << snack[0].kaluri << endl
         << snack[0].model;
    cout << snack[1].height << endl
         << snack[1].kaluri << endl
         << snack[1].model;
    cout << snack[2].height << endl
         << snack[2].kaluri << endl
         << snack[2].model;
}

void Example_7()
{
    using namespace std;
    struct Pizza
    {
        string name;
        float inch;
        float weight;
    };
    Pizza A;
    cout << "Enter the name and inch and weight: ";
    cin >> A.name >> A.inch >> A.weight;
    cout << A.name << " " << A.inch << " " << A.weight;
}

void Example_8()
{
    using namespace std;
    struct Pizza
    {
        string name;
        float inch;
        float weight;
    };
    Pizza *A = new Pizza;
    cout << "Enter the name and inch and weight: ";
    cin >> A->inch >> A->name >> A->weight;
    cout << A->name << " " << A->inch << " " << A->weight;
    delete A;
}

void Example_9()
{
    using namespace std;
    struct CandyBar
    {
        string model;
        float height;
        int kaluri;
    };
    CandyBar *Ptr_1 = new CandyBar;
    CandyBar *Ptr_2 = new CandyBar;
    CandyBar *Ptr_3 = new CandyBar;

    /*
    {
        ……
    }
    */

    delete Ptr_1;
    delete Ptr_2;
    delete Ptr_3;
}

void Example_10()
{
    using namespace std;
    array<float, 3> Score_40m;
    cout << "Enter 3 times datas";
    cin >> Score_40m[0] >> Score_40m[1] >> Score_40m[2];
    cout << "The times are 3, "
         << "The average score is " << (Score_40m[0] + Score_40m[1] + Score_40m[2]) / 3;
}
