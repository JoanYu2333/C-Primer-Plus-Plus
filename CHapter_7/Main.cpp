/**
 * @File Name: Main.cpp
 * @Brief :
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-02-15
 *
 */

#include "Head.h"
int main()
{
    using namespace std;
    double a, b, q;
    cout << "Enter double number";
    while (cin >> a >> b)
    {
        q = calculate(a, b, add);
        cout << q;
    }
    system("pause");
    return 0;
}

float Example_1(float a, float b)
{
    return 2 * a * b / (a + b);
}

void Example_2(std::array<float, 10> a)
{
    using namespace std;
    float sum;
    int count = 0;
    cout << "Enter the score" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a.at(i);
        if (a.at(i) < 0)
        {
            cout << "Enter Stop" << endl;
            a.at(i) = 0;
            break;
        }
    }

    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
    }

    for (auto i = a.begin(); i != a.end(); i++)
    {
        sum += *i;
        if (*i != 0)
        {
            count++;
        }
    }
    sum /= count;
    cout << endl
         << "The average is: " << sum;
}

void Example_3(box a, box *b)
{
    using namespace std;
    cout << b->height << b->length << b->maker << b->volume << b->width;
    b->volume = b->height * b->length * b->width;
}

void Example_4(void)
{
    // 1/47 * 1/46 * 1/45 * 1/44 * 1/43 * 1/27
}

int Example_5(int value)
{
    if (value == 0)
    {
        return 1;
    }
    else
    {
        value = value * Example_5(value - 1);
        return value;
    }
}

void Example_6(std::vector<double> a, int count)
{
    using namespace std;
    cout << "Enter double value" << endl;
    double number;
    int size = 0;

    /****************************/
    while (cin >> number)
    {
        a.push_back(number);
        size++;
        if (a.size() == count)
        {
            break;
        }
    }
    // return size;
    /****************************/

    /****************************/
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    /****************************/

    /****************************/
    double temp;
    for (int i = 0; i < size / 2 - 1; i++)
    {
        temp = a.at(i + 1);
        a.at(i + 1) = a.at(count - i - 2);
        a.at(count - i - 2) = temp;
    }
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    /****************************/
}

// Example_7 Example_8 Example_9 略

double calculate(double a, double b, double (*p)(double c, double d))
{
    return p(a, b);
}

double add(double x, double y)
{
    return x + y;
}
