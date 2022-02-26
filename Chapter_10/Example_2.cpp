#include "Head.h"

void Example_2()
{
    Person A;
    Person B("YUJOAN");
    const char *ptr = "WeWant";
    Person C("YUJOAN", ptr);
}

void Person::Show() const
{
    cout << this->fname << " " << lname;
}

Person::Person(const string &ln, const char *fn = "Heyyou")
{
    this->lname = ln;
    strcpy(this->fname, fn);
}

void Person::Show() const
{
    cout << this->fname << this->lname;
}

void Person::FormalShow() const
{
    cout << this->lname << this->fname;
}