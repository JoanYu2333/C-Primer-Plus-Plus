#include "Head.h"

List::List(int data, int length)
{
    this->data = data;
    this->length = length;
    this->next = NULL;
}

List &List::Create()
{
    cout << "Enter the data";
    int temp;
    cin >> temp;
    new List(temp, 1);
    return *this;
}

List::~List()
{
    cout << "Bye!";
}

void List::Add()
{
    List *ptr = this;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new List;
    this->length++;
}

bool List::isempty()
{
    if (this->length == 0)
        return true;
    else
        return false;
}
bool List::isfull()
{
    // The List is Link, Not full
    return false;
}

void List::getcontext()
{
    List *ptr = this;
    while (ptr->next != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}