#include "Head.h"

void Example_1(const char *const p, int count)
{
    static int times = 0;
    times++;
    if (count == 0)
    {
        std::cout << p;
    }
    else
    {
        for (int i = 0; i < times; i++)
        {
            std::cout << p;
        }
    }
}

void Example_1(char *p)
{
    std::cout << p;
}
