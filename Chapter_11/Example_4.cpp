#include "Head.h"
void Example_4()
{
    using EXAMPLE_4::Time;
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida +Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
}
namespace EXAMPLE_4
{
    Time::Time()
    {
        hours = minutes = 0;
    }

    Time::Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void Time::AddMin(int m)
    {
        minutes += m;
        hours += minutes / 60;
        minutes %= 60;
    }

    void Time::AddHr(int h)
    {
        hours += h;
    }

    void Time::Reset(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    Time operator+(const Time &m, const Time &t)
    {
        Time sum;
        sum.minutes = m.minutes + t.minutes;
        sum.hours = m.hours + t.hours + sum.minutes / 60;
        sum.minutes %= 60;
        return sum;
    }

    Time operator-(const Time &m, const Time &t)
    {
        Time diff;
        int tot1, tot2;
        tot1 = t.minutes + 60 * t.hours;
        tot2 = m.minutes + 60 * m.hours;
        diff.minutes = (tot2 - tot1) % 60;
        diff.hours = (tot2 - tot1) / 60;
        return diff;
    }

    Time operator*(const Time &m, double a)
    {
        Time result;
        long totalminutes = m.hours * a * 60 + m.minutes * a;
        result.hours = totalminutes / 60;
        result.minutes = totalminutes % 60;
        return result;
    }

    std::ostream &operator<<(std::ostream &os, const Time &t)
    {
        os << t.hours << " hours, " << t.minutes << " minutes";
        return os;
    }
}
