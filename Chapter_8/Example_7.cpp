#include "Head.h"

struct debts
{
    char name[50];
    double amount;
};

void Example_7()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
        {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe", 1300.0},
            {"Iby Stout0", 1800.0}};

    double *pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Listing Mr.E's counts of things :\n";
    cout << ShowArray(things, 6) << endl;
    cout << "Listing Mr.E's debts :\n";
    cout << ShowArray(pd, 3);
}

template <typename T>
T ShowArray(T arr[], int n)
{
    T sum = 0;
    cout << "template A\n";
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

template <typename T>
T ShowArray(T *arr[], int n)
{
    T sum = 0;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
    {
        sum += *arr[i];
    }
    return sum;
}
