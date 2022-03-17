#include "Example_4.h"

Port::Port(const char *br, const char *st, int b)
{
    if (strlen(st) > 19)
    {
        exit(EXIT_FAILURE);
    }
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p)
{
    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p)
{
    if (&p == this)
    {
        return *this;
    }
    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port &Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b)
{
    if (bottles < b)
    {
        exit(EXIT_FAILURE);
    }
    bottles -= b;
    return *this;
}

void Port::Show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream &operator<<(ostream &os, const Port &p)
{
    os << "The brand is " << p.brand << ", "
       << "The style is " << p.style << ", "
       << "The bottle is " << p.bottles;
    return os;
}

VintagePort::VintagePort() : Port()
{
    nickname = new char[20];
    strcpy(nickname, "NULL");
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "none", b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if (&vp == this)
    {
        return *this;
    }
    delete[] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    Port::operator=(vp);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream &operator<<(ostream &os, const VintagePort &vp)
{
    os << (Port &)vp;
    os << ", "
       << "The nickname is " << vp.nickname << ", "
       << "The year is " << vp.year;
}
