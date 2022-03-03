#include "Head.h"
using namespace std;

void Example_2()
{
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance(q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
        {
            break;
        }
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n"
             << result << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
}

namespace VECTOR
{
    const double Red_to_deg = 45.0 / atan(1.0);
    void Vector::set_mag()
    {
        cout << "The function has been deleted" << endl;
    }
    void Vector::set_ang()
    {
        cout << "The function has been deleted" << endl;
    }
    void Vector::set_x(double n1, double n2)
    {
        x = n1 * cos(n2);
        // x = magval() * cos(angval());
    }
    void Vector::set_y(double n1, double n2)
    {
        y = n1 * sin(n2);
        // y = magval() * sin(angval());
    }
    Vector::Vector()
    {
        x = y = 0.0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if (form == POL)
        {
            set_x(n1, n2);
            set_y(n1, n2);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
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
        }
        else if (form == POL)
        {
            set_x(n1, n2);
            set_y(n1, n2);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
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
            os << "(m,a)=(" << v.magval() << "," << v.angval() * Red_to_deg << ")";
        }
        else
            os << "Vector object mod is invalid";
        return os;
    }
}