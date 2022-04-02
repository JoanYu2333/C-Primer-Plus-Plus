#include "Head.h"

void Example_2();
double hmean(double a, double b);
double gmean(double a, double b);

class bad_hmean : public std::logic_error
{
private:
    double v1;
    double v2;

public:
    bad_hmean(double a = 0, double b = 0) : v1(a), v2(b), logic_error("Error") {}
    void what();
};

inline void bad_hmean::what()
{
    cout << "invalid arguments: a = -b\n";
}

class bad_gmean : public std::logic_error
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0) : v1(a), v2(b), logic_error("Error") {}
    void what();
};

inline void bad_gmean::what()
{
    cout << "gmean() arguments should be >=0\n";
}