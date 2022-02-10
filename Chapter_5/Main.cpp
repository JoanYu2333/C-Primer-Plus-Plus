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
    Example_4();
    /*
    int array[5] = {0, 1, 2, 3, 4};
    for (int x : array)
    {
        std::cout << x << std::endl;
    }
    */
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
