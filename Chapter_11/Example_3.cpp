#include "Head.h"
using namespace std;

void Example_3()
{
    using VECTORS::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    int N = 0;
    double dstep;
    unsigned long average_steps = 0;
    unsigned long max_steps = 0;
    unsigned long min_steps = 50000;
    cout << "Enter target distance(q to quit): ";
    while (cin >> target)
    {
        cout << "Enter the times of Target :";
        cin >> N;
        cout << "Enter step length: ";
        if (!(cin >> dstep))
        {
            break;
        }
        for (int i = 0; i < N; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }
            if (steps > max_steps)
                max_steps = steps;
            if (steps < min_steps)
                min_steps = steps;
            average_steps += steps;
            result.polar_mode();
            steps = 0;
            result.reset(0.0, 0.0);
        }
        average_steps /= N;
        cout << "The avarage is: " << average_steps << endl;
        cout << "The Max is: " << max_steps << endl;
        cout << "The Min is: " << min_steps;
    }
    cout << "Bye!\n";
}

namespace VECTORS
{
    const double Red_to_deg = 45.0 / atan(1.0);
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }
    void Vector::set_ang()
    {
        if (x == 0.0 and y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }
    void Vector::set_x()
    {
        x = mag * cos(ang);
    }
    void Vector::set_y()
    {
        y = mag * sin(ang);
    }
    Vector::Vector()
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    Vector ::~Vector()
    {
    }

    void Vector::polar_mode()
    {
        mode = POL;
    }

    void Vector::rect_mode()
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector &b) const { return Vector(x + b.x, y + b.y); }
    Vector Vector::operator-(const Vector &b) const { return Vector(x - b.x, y - b.y); }
    Vector Vector::operator-() const { return Vector(-x, -y); }
    Vector Vector::operator*(double n) const { return Vector(n * x, n * y); }
    Vector operator*(double n, const Vector &a) { return a * n; }
    ostream &operator<<(ostream &os, const Vector &v)
    {
        if (v.mode == Vector::RECT)
        {
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        }
        else if (v.mode == Vector::POL)
        {
            os << "(m,a)=(" << v.mag << "," << v.ang * Red_to_deg << ")";
        }
        else
            os << "Vector object mod is invalid";
        return os;
    }
}