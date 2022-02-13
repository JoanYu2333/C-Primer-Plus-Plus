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
    Example_9();
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
            puts("Please enter a c , p, t, or g :");
        }
    }
}

void Example_4(void)
{
    using namespace std;
    const int strsize = 20;
    const int number = 5;
    struct bop
    {
        char fullname[strsize];
        char title[strsize];
        char bopname[strsize];
        int preference; // 0=fullname 1=title 2=bopname
    };
    bop China[number] = {
        {"Wimp Macho", "Wimp", "Macho", 1},
        {"Raki Rhodes", "Raki", "Rhodes", 2},
        {"Celia Laiter", "Celia", "Laiter", 3},
        {"Hoppy Hipman", "Hoppt", "Hipman", 4},
        {"Pat Hand", "Pat", "Hand"}};
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. dispaly by name      "
         << "b. display by title   " << endl;
    cout << "c. dispaly by hopname   "
         << "d. display by preference   " << endl;
    cout << "q. quit" << endl;
    char p;
    cout << "Enter your choice: ";
    while (1)
    {
        if (!(cin >> p))
        {
            exit(EXIT_FAILURE);
        }
        switch (p)
        {
        case 'a':
            for (int i = 0; i < 5; i++)
            {
                cout << China[i].fullname << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                cout << China[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                cout << China[i].bopname << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < 5; i++)
            {
                cout << China[i].preference << endl;
            }
            break;
        case 'q':
            cout << "Bye!" << endl;
            return;
        default:
            break;
        }
        cout << "Next choice: ";
    }
}

void Example_5(void)
{
    using namespace std;
    const float one_tax = 0.1;
    const float two_tax = 0.15;
    const float three_tax = 0.2;
    double tvarps = 0;
    double tax = 0;
    while (1)
    {
        cout << "Enter your tvarps" << endl;
        if (!(cin >> tvarps))
        {
            exit(EXIT_FAILURE);
        }
        if (tvarps < 0)
        {
            cout << "Mistake!";
            return;
        }
        if (tvarps > 35000)
        {
            tax = (tvarps - 35000) * three_tax + 10000 * one_tax + 20000 * two_tax;
        }
        else if (tvarps > 15001 and tvarps <= 35000)
        {
            tax = (tvarps - 15000) * two_tax + 10000 * one_tax;
        }
        else
        {
            tax = (tvarps - 5000) * one_tax;
        }
    }
}

void Example_6(void)
{
    using namespace std;
    struct DONATE
    {
        string name;
        double money;
    };
    int number;
    cout << "Enter the how many people take part in this activity: ";
    if (!(cin >> number))
        EXIT_FAILURE;
    DONATE *p = new DONATE[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter the name: " << endl;
        cin >> (p + i)->name;
        cout << "Enter the money: " << endl;
        cin >> (p + i)->money;
    }
    int flag = 0;
    cout << "Grand Patrons: " << endl;
    for (int i = 0; i < number; i++)
    {
        if ((p + i)->money >= 10000)
        {
            flag = 1;
            cout << "Name: " << (p + i)->name << " "
                 << "Money: " << (p + i)->money << endl;
        }
    }
    if (!flag)
    {
        cout << "none" << endl;
    }
    flag = 0;
    cout << "Patrons: " << endl;
    for (int i = 0; i < number; i++)
    {
        if ((p + i)->money < 10000)
        {
            flag = 1;
            cout << "Name: " << (p + i)->name << " "
                 << "Money: " << (p + i)->money << endl;
        }
    }
    if (!flag)
    {
        cout << "none" << endl;
    }
    delete []p;
}

void Example_7(void)
{
    using namespace std;
    int count_yuanyin = 0;
    int count_fuyin = 0;
    int count_other = 0;
    cout << "Enter words (q to quit) : " << endl;
    string words;
    while (cin >> words)
    {
        if (words == "q")
        {
            break;
        }
        if (isalpha(*(words.begin())))
        {
            switch (*(words.begin()))
            {
            case 'a':
                count_yuanyin++;
                break;
            case 'e':
                count_yuanyin++;
                break;
            case 'i':
                count_yuanyin++;
                break;
            case 'o':
                count_yuanyin++;
                break;
            case 'u':
                count_yuanyin++;
                break;
            default:
                count_fuyin++;
                break;
            }
        }
        else
        {
            count_other++;
        }
    }
    cout << "Yuanyin : " << count_yuanyin << " Fuyin : " << count_fuyin << " Qita : " << count_other;
}

void Example_8(void)
{
    using namespace std;
    ifstream inFile;
    inFile.open("Test.txt");
    char c;
    int count;
    while (!inFile.eof())
    {
        inFile >> c;
        if (isalpha(c))
            count++;
    }
    cout << count;
    inFile.close();
}

void Example_9(void)
{
    using namespace std;
    struct DONATE
    {
        string name;
        double money;
    };
    int number;
    ifstream iFile;
    iFile.open("Test.txt");
    iFile >> number;
    iFile.get();
    DONATE *p = new DONATE[number];
    for (int i = 0; i < number; i++)
    {
        getline(iFile, (p + i)->name);
        iFile >> (p + i)->money;
        iFile.get();
    }
    int flag = 0;
    cout << "Grand Patrons: " << endl;
    for (int i = 0; i < number; i++)
    {
        if ((p + i)->money >= 10000)
        {
            flag = 1;
            cout << "Name: " << (p + i)->name << " "
                 << "Money: " << (p + i)->money << endl;
        }
    }
    if (!flag)
    {
        cout << "none" << endl;
    }
    flag = 0;
    cout << "Patrons: " << endl;
    for (int i = 0; i < number; i++)
    {
        if ((p + i)->money < 10000)
        {
            flag = 1;
            cout << "Name: " << (p + i)->name << " "
                 << "Money: " << (p + i)->money << endl;
        }
    }
    if (!flag)
    {
        cout << "none" << endl;
    }
    iFile.close();
    delete []p;
}