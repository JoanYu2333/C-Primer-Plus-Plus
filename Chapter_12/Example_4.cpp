#include "Example_4.h"

void Example_4()
{
    Stack Test(3);
    std::cout << "create the new stack\n";
    Test.push(2);
    std::cout << Test;
}

Stack::Stack(int n)
{
    this->size = n;
    this->top = 0;
    this->pitems = new Item[size]();
}

Stack::Stack(const Stack &st)
{
    this->size = st.size;
    this->top = st.top;
    this->pitems = new Item[size]();
    for (size_t i = 0; i < st.size; i++)
    {
        pitems[i] = st.pitems[i];
    }
}

bool Stack::isempty() const
{
    if (this->top == 0)
    {
        return true;
    }
    return false;
}

bool Stack::isfull() const
{
    if (this->top == 0)
    {
        return false;
    }
    return true;
}

bool Stack::push(const Item &item)
{
    this->pitems[++top] = item;
    return true;
}

bool Stack::pop(Item &item)
{
    item = this->pitems[top--];
    return true;
}

Stack::~Stack()
{
    delete[] pitems;
    size = 0;
    top = 0;
}

Stack &Stack::operator=(const Stack &st)
{
    if (this == &st)
    {
        return *this;
    }
    this->size = st.size;
    this->top = st.top;
    this->pitems = new Item[size]();
    for (size_t i = 0; i < st.size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Stack &st)
{
    for (int i = st.top; i > 0; i--)
    {
        os << st.pitems[i] << " ";
    }
    return os;
}
