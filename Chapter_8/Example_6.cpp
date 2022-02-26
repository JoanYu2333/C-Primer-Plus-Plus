#include "Head.h"

void Example_6()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    double brray[4] = {1.1, 2.2, 3.3, 4.4};
    cout << *Example_6_maxn(array, 6) << endl;
    cout << *Example_6_maxn(brray, 4) << endl;
    const char *ptr[] = {"aas", "dasda", "sad"};
    cout << *Example_6_maxn(ptr, 3);
}

template <typename T>
T Example_6_maxn(T array, int count)
{
    T max;
    *max = array[0];
    for (int i = 1; i < (int)count; i++)
    {
        if (array[i] > *max)
        {
            *max = array[i];
        }
    }
    return max;
}

template <>
char **Example_6_maxn(char **ptr, int count)
{
    char **s = NULL;
    int max = 0;
    max = strlen(ptr[0]);
    for (int i = 1; i < count; i++)
    {
        if (strlen(ptr[i]) > max)
        {
            max = strlen(ptr[i]);
            s = ptr + i;
        }
    }
    ptr = s;
    return ptr;
}
