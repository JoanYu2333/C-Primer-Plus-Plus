#include "Head.h"

void Example_1()
{
    Bank Test;
    Test.Init(Test, "00000", "YUJOAN", 50000);
    Test.Show(Test);
}

Bank::Bank()
{
    this->money = 0;
    this->name = "None";
    this->number = "0";
}

Bank::~Bank()
{
    cout << "Bye!";
}

void Bank::Init(Bank &T, string number, string name, float money)
{
    T.number = number;
    T.name = name;
    T.money = money;
}

void Bank::Show(const Bank &T) const
{
    cout << T.money << T.name << T.number;
}

void Bank::SaveMoney(Bank &T, float money)
{
    T.money += money;
}

void Bank::FetchMoney(Bank &T, float money)
{
    T.money -= money;
}
