/**
 * @File Name: Head.h
 * @Brief :
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-02-26
 *
 */

#ifndef HEAD_H_
#define HEAD_H_
#include <iostream>
#include <array>
#include <string>
#include <cstring>
using namespace std;

void Example_1();
class Bank
{
private:
    string name;
    string number;
    float money;

public:
    Bank();
    ~Bank();
    void Init(Bank &T, string number, string name, float money);
    void Show(const Bank &T) const;
    void SaveMoney(Bank &T, float money);
    void FetchMoney(Bank &T, float money);
};

void Example_2();
class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person()
    {
        lname = "";
        fname[0] = '\0';
    }
    Person(const string &ln, const char *fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

void Example_3();
const int Len = 40;
class golf
{
private:
    char fullname[Len];
    int handicap;

public:
    golf(golf &g, const char *name, int hc);
    int setgolf(golf &g);
    void sethandicap(golf &g, int hc);
    void showgolf(const golf &g);
};

void Example_4();
namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;

    public:
        Sales(Sales &s, const double ar[], int n);
        void setSales(Sales &s);
        void showSales(const Sales &s);
    };
}

#endif