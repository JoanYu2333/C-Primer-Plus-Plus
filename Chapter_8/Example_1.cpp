#include "Head.h"

void Example_1(const char *const p, int count)
{
    static int times = 0;
    times++;
    if (count == 0)
    {
        cout << p;
    }
    else
    {
        for (int i = 0; i < times; i++)
        {
            cout << p;
        }
    }
}

void Example_1(char *p)
{
    cout << p;
}
