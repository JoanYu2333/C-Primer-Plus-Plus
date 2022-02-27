#include "Head.h"
using namespace SALES;
Sales::Sales(Sales &s, const double ar[], int n)
{
    double sum = 0;
    double min = ar[0];
    double max = ar[0];
    for (int i = 0; i < n; i++)
    {
        s.sales[i] = ar[i];
        sum += s.sales[i];
        if (ar[i] > max)
        {
            max = ar[i];
        }
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    s.average = sum / n;
    s.max = max;
    s.min = min;
}

void Sales::setSales(Sales &s)
{
    s = Sales(*this, this->sales, QUARTERS);
}

void Sales::showSales(const Sales &s)
{
    using namespace std;
    for (int i = 0; i < 4; i++)
    {
        cout << s.sales[i] << " ";
    }
    cout << endl;
    cout << "s.average is : " << s.average << endl
         << "S.max is : " << s.max << endl
         << "S.min is : " << s.min;
}