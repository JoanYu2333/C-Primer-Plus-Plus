/**
 * @File Name: Main.cpp
 * @Brief :
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-01-21
 *
 */

#include "Head.h"
int main(void)
{
    using namespace std;
    Example_7();
    system("pause");
    return 0;
}

void Example_1(void)
{
    using namespace std;
    int i, j;
    cout << "Enter two int number, the first is min: ";
    cin >> i >> j;
    int k = i;
    int sum = 0;
    for (; k <= j; k++)
    {
        sum += k;
    }
    cout << sum;
}

void Example_2(void)
{
    using namespace std;
    const int ArSize = 100;
    array<long double, ArSize> factorials;
    factorials.at(1) = factorials.at(0) = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials.at(i) = i * factorials.at(i - 1);
    for (int i = 0; i <= ArSize; i++)
        cout << i << "! = " << factorials.at(i) << endl;
}

void Example_3(void)
{
    using namespace std;
    int sum;
    int temp;
    do
    {
        cout << "Enter the number" << endl;
        cin >> temp;
        sum += temp;
    } while (temp != 0);
    cout << "The sum are :";
    cout << sum;
}

void Example_4(void)
{
    using namespace std;
    const float BENEFIT_SINGLE = 0.1;
    const float BENEFIT_PLURAL = 0.05;
    float money_Daphne = 100;
    float money_Cleo = 100;
    int count_year = 0;
    while (money_Cleo <= money_Daphne)
    {
        money_Cleo = money_Cleo + money_Cleo * BENEFIT_PLURAL;
        money_Daphne += 10;
        count_year += 1;
    }
    cout << "The year is : " << count_year << endl;
    cout << "The money of Daphne and Cleo is : ";
    cout << money_Daphne << " " << money_Cleo;
}

void Example_5(void)
{
    using namespace std;
    int number_sale_month[12];
    int number_Sale_sum;
    int i = 0;
    string month[12] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
    do
    {
        cout << "The number of " << month[i] << " are :";
        cin >> number_sale_month[i];
        number_Sale_sum += number_sale_month[i];
    } while (i++ < 11);
    cout << "The sum number are : " << number_Sale_sum;
}

void Example_6(void)
{
    using namespace std;
    int number_sale_month[3][12];
    int number_Sale_sum;
    int year = 1;
    int i = 0;
    int j = 0;
    string month[12] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
    do
    {
        do
        {
            cout << "The number of " << j + 1 << " Year and " << month[i] << " Month is";
            cin >> number_sale_month[j][i];
            number_Sale_sum += number_sale_month[j][i];
        } while (i++ < 11);
        i = 0;
    } while (j++ < 2);
    cout << "The sum number are : " << number_Sale_sum;
}

void Example_7(void)
{
    using namespace std;
    struct Car
    {
        string name;
        int year_establish;
    };
    int number;
    string rog;
    int i = 0;
    cout << "How many cars do you wish to catalog? ";
    cin >> number;
    cin.ignore();
    Car *p = new Car[number];
    while (i < number)
    {
        cout << "Car #" << i + 1 << endl;
        cout << "Please enter the make : ";
        getline(cin, (p + i)->name);
        cout << "Please enter the year made : ";
        cin >> (p + i)->year_establish;
        cin.ignore();
        i++;
    }
    i = 0;
    cout << "Here is your collection" << endl;
    while (i < number)
    {
        cout << (p + i)->year_establish << " " << (p + i)->name << endl;
        i++;
    }
}
