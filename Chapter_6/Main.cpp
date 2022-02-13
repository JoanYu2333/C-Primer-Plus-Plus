/**
 * @File Name: Main.cpp
 * @Brief :
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-02-12
 *
 */

#include "Head.h"
int main()
{
    Example_3();
    system("pause");
    return 0;
}

void Example_1(void)
{
    char ch;
    // while ((ch = getchar()) != '@')
    // C语言风格
    using namespace std;
    while (cin >> ch)
    {
        if (isalpha(ch))
        {
            if (islower(ch))
                ch = tolower(ch);
            else
                ch = toupper(ch);
            putchar(ch);
        }
    }
}

void Example_2(void)
{
    using namespace std;
    array<double, 10> array;
    array.fill(0);
    int value = 0;
    double average = 0;
    int count_beyoud_average = 0;
    int count = 0;
    int i = 0;
    for (; i < 10; i++, count++)
    {
        if (cin >> value)
        {
            average += value;
            array.at(i) = value;
        }
        else
        {
            break;
        }
    }
    average = average / count;
    for (i = 0; i < count; i++)
    {
        if (array.at(i) > average)
        {
            count_beyoud_average++;
        }
    }
    cout << "The average is " << average << " and the count is " << count_beyoud_average;
}

void Example_3(void)
{
    using namespace std;
    char q;
    cout << "Please Enter Alpha " << endl;
    while (1)
    {
        if (!(cin >> q))
        {
            exit(EXIT_FAILURE);
        }
        switch (q)
        {
        case 'c':
            puts("A maple is a carnivore");
            break;
        case 'p':
            puts("A maple is a pianist");
            break;
        case 't':
            puts("A maple is a tree");
            break;
        case 'g':
            puts("A maple is a game");
            break;
        default:
            puts("Please enter a c , p, t or g :");
        }
    }
}