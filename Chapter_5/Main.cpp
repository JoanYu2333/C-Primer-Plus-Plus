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
    Example_2();
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

void Example_3(void)
{
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
