#include "Head.h"

void Example_4()
{
    stringy beany;
    char testing[] = "reality isn't what it used to be.";
    Example_4_set(beany, testing);
    Example_4_show(beany);
    Example_4_show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    Example_4_show(testing);
    Example_4_show(testing, 3);
    Example_4_show("Done!");
}

void Example_4_set(stringy &A, char *str)
{
    A.str = new char(sizeof(str));
    strcpy(A.str, str);
    A.ct = strlen(A.str);
}

void Example_4_show(const char *str, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << str << endl;
    }
}

void Example_4_show(const stringy &A, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << A.str << endl;
    }
}