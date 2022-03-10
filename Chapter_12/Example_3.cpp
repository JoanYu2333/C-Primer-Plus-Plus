#include "Example_3.h"

void Example_3()
{
    const int STKS = 4;
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)};
    cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
    {
        stocks[st].show();
    }
    const Stock *top = &stocks[0];
    for (st = 1; st < STKS; st++)
    {
        top = &top->topval(stocks[st]);
    }
    cout << "\nMost valueable holding:\n";
    cout << *top;
}

Stock::Stock()
{
    company = new string;
    *company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const string &co, long n, double pr)
{
    company = new string(co);
    if (n < 0)
    {
        cout << " Number of shares can't be negative; "
             << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    delete company;
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative ."
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Company: " << *company
         << " Shares:: " << shares << '\n';
    cout << "Share Price: $" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << '\n';
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}

ostream &operator<<(ostream &os, const Stock &s)
{
    using std::ios_base;
    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);
    os << "Company: " << *s.company
       << " Shares:: " << s.shares << '\n';
    os << "Share Price: $" << s.share_val;
    os.precision(2);
    os << " Total Worth: $" << s.total_val << '\n';
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}