#include "Example_3.h"
namespace EXAMPLE3
{
    void Example_3()
    {
        double x, y, z, g;
        cout << "Enter two numbers: ";
        while (cin >> x >> y)
        {
            try
            {
                z = hmean(x, y);
                g = gmean(x, y);
                cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
                cout << "Geometric mean of " << x << " and " << y << " is " << g << endl;
                cout << "Enter next set of numbers <q to quit>: ";
            }
            catch (bad_hmean &lg)
            {
                lg.what();
                cout << "Sorry, you don't get to play any more.\n";
                break;
            }
            catch (bad_gmean &hg)
            {
                hg.what();
                cout << "Sorry, you don't get to play any more.\n";
                break;
            }
        }
        cout << "Bye!\n";
    }

    double hmean(double a, double b)
    {
        if (a == -b)
            throw bad_hmean(a, b);
        return 2.0 * a * b / (a + b);
    }

    double gmean(double a, double b)
    {
        if (a < 0 or b < 0)
            throw bad_gmean(a, b);
        return sqrt(a * b);
    }
}