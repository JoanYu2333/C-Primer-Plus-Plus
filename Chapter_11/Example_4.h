#ifndef _EXAMPLE_4_HEAD
#define _EXAMPLE_4_HEAD
#include <iostream>
void Example_4();
namespace EXAMPLE_4
{
    class Time
    {
    private:
        int hours;
        int minutes;

    public:
        Time();
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        friend Time operator+(const Time &m, const Time &t);
        friend Time operator-(const Time &m, const Time &t);
        friend Time operator*(const Time &m, double a);
        friend Time operator*(double m, const Time &t) { return t * m; }
        friend std::ostream &operator<<(std::ostream &os, const Time &t);
    };
}

#endif