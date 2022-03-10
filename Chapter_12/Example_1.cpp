#include "Example_1.h"
#include <cstring>
#include <iostream>

using namespace EXAMPLE1;

void EXAMPLE1::Enter()
{
    Cow a("yu", "joan", 5);
    a.ShowCow();
    Cow b = a;
    b.ShowCow();
}

Cow::Cow()
{
    memset(name, '\0', sizeof(name));
    hobby = nullptr;
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete[] this->hobby;
    std::cout << "Bye! ";
}

Cow &Cow::operator=(const Cow &c)
{
    if (this == &c)
    {
        return *this;
    }
    delete[] hobby;
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    using std::cout;
    using std::endl;
    cout << name << endl;
    cout << hobby << endl;
    cout << weight;
}
