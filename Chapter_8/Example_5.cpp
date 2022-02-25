#include "Head.h"

template <typename T>
T Example_5_max5(T array[5])
{
    T max = array[0];
    for (int i = 1; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void Example_5()
{
    int array[5] = {1, 2, 3, 4, 5};
    double brray[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << Example_5_max5(array) << " ";
    cout << Example_5_max5(brray);
}
