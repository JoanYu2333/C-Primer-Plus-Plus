#include "Head.h"
using namespace SALES;
void setSales(Sales &s, const double ar[], int n)
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

void setSales(Sales &s)
{
    double sum = 0;
    double min = s.sales[0];
    double max = s.sales[0];
    for (int i = 0; i < 4; i++)
    {
        sum += s.sales[i];
        if (s.sales[i] > max)
        {
            max = s.sales[i];
        }
        if (s.sales[i] < min)
        {
            min = s.sales[i];
        }
    }
    s.average = sum / 4;
    s.max = max;
    s.min = min;
}

void showSales(const Sales &s)
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