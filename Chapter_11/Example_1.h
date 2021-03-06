#ifndef EXAMPLE_1_HEAD_
#define EXAMPLE_1_HEAD_

void Example_1();

namespace EXMAPLE_1
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
        Time operator+(const Time &t) const;
        void Show() const;
    };
}

#endif