#include "Head.h"

void Example_7()
{
}

plorg::plorg(/* args */)
{
    strcpy(this->name, "Plorga");
    this->CI = 50;
}

plorg::~plorg()
{
}

void plorg::ModifyCI(int CI)
{
    this->CI = CI;
}

void plorg::Show() const
{
    cout << this->CI << this->name;
}
