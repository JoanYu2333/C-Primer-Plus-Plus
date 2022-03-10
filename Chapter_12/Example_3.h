#ifndef EXAMPLE3_H_
#define EXAMPLE3_H_
#include "Head.h"
using std::cin;
using std::cout;
using std::ostream;
using std::string;
void Example_3();

class Stock
{
private:
    string *company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock();
    Stock(const string &co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    friend ostream &operator<<(ostream &os, const Stock &s);
    // ostream &operator<<(const Stock &s);
    const Stock &topval(const Stock &s) const;
};

#endif
