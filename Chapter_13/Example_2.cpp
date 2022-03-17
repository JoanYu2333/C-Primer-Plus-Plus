#include "Example_2.h"
using namespace EXAMPLE2;
void Bravo(const Cd &disk)
{
    disk.Report();
}

void Example_2()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat,Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;
    cout << "Using object directly:\n";
    c1.Report();
    c2.Report();

    cout << "Using type cd * pointer to objects:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout << "Calling a funcion with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);

    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();
}

Cd::Cd()
{
    performers = new char[50]();
    label = new char[20]();
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    delete[] performers;
    delete[] label;
}

Cd::Cd(char *s1, char *s2, int n, double x)
{
    performers = new char[strlen(s1) + 1]();
    label = new char[strlen(s2) + 1]();
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    delete[] performers;
    delete[] label;
    performers = new char[strlen(d.performers) + 1]();
    label = new char[strlen(d.label) + 1]();
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

void Cd::Report() const
{
    cout << "The performers is " << performers << endl;
    cout << "The label is " << label << endl;
    cout << "The selections is " << selections << endl;
    cout << "The playtime is " << playtime << endl;
}

Cd &Cd::operator=(const Cd &d)
{
    if (&d == this)
    {
        return *this;
    }
    delete[] performers;
    delete[] label;
    performers = new char[strlen(d.performers) + 1]();
    label = new char[strlen(d.label) + 1]();
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic() : Cd()
{
    str = new char[50]();
}

Classic::Classic(char *s1, char *s2, char *s3, int n, double x) : Cd(s1, s2, n, x)
{
    str = new char[strlen(s3) + 1]();
    strcpy(str, s3);
}

void Classic::Report() const
{
    Cd::Report();
    cout << "The str is " << str << endl;
}

Classic &Classic::operator=(const Classic &d)
{
    if (&d == this)
    {
        return *this;
    }

    Cd::operator=(d);
    delete[] str;
    str = new char[strlen(d.str) + 1]();
    strcpy(str, d.str);
    return *this;
}

Classic::~Classic()
{
}
