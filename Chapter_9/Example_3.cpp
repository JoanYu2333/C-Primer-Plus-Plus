#include "Head.h"

struct chaff
{
    char dross[20];
    int slag;
};

void Example_3()
{
    using namespace std;
    char buf[30];
    cout << "The buf address is : " << &buf << endl;
    chaff *ptr = new (buf) chaff;
    cout << "The ptr address is : " << ptr << endl;
    strcpy(ptr->dross, "Test");
    ptr->slag = 3;
    char *p = ptr->dross;
    while (*p != '\0')
    {
        cout << *p++;
    }
    cout << endl;
}