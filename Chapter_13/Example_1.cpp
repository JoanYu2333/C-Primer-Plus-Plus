#include "Example_1.h"

void Bravo(const Cd &disk)
{
    disk.Report();
}

void Example_1()
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
    memset(performers, '\0', 20);
    memset(label, '\0', 20);
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
}

Cd::Cd(char *s1, char *s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
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
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic() : Cd()
{
    memset(str, '\0', 50);
}

Classic::Classic(char *s1, char *s2, char *s3, int n, double x) : Cd(s1, s2, n, x)
{
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
    strcpy(str, d.str);
    return *this;
}

Classic::~Classic()
{
}