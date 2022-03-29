#include "Head.h"

void Example_5();

class abstr_emp
{
private:
    string fname;
    string lname;
    string job;

public:
    abstr_emp()
    {
        this->fname = "None";
        this->lname = "None";
        this->job = "None";
    }
    abstr_emp(const string &fn, const string &ln, const string &j)
    {
        fname = fn;
        lname = ln;
        job = j;
    }
    virtual void ShowAll() const
    {
        cout << "The fname is : " << fname << endl;
        cout << "The lname is : " << lname << endl;
        cout << "The job is : " << job << endl;
    }
    virtual void SetAll()
    {
        cout << "Enter the fname : ";
        cin >> fname;
        cout << "\nEnter the lname : ";
        cin >> lname;
        cout << "\nEnter the job : ";
        cin >> job;
    }
    friend ostream &operator<<(ostream &os, const abstr_emp &e);
    virtual ~abstr_emp() = 0;
};

class employee : public abstr_emp
{
public:
    employee() : abstr_emp() {}
    employee(const string &fn, const string &ln, const string &j) : abstr_emp(fn, ln, j) {}
    virtual void ShowAll() const { abstr_emp::ShowAll(); }
    // virtual void SetAll() {}
};

class manager : virtual public abstr_emp
{
private:
    int inchargeof;

protected:
    int InChargeOf() const { return inchargeof; }
    int &InChargeOf() { return inchargeof; }

public:
    manager() : abstr_emp() { this->inchargeof = 0; }
    manager(const string &fn, const string &ln, const string &j, int ico = 0) : abstr_emp(fn, ln, j), inchargeof(ico) {}
    manager(const abstr_emp &e, int ico) : abstr_emp(e), inchargeof(ico) {} //调用默认复制构造函数，浅拷贝
    manager(const manager &m) : abstr_emp(m), inchargeof(m.inchargeof) {}
    virtual void ShowAll() const
    {
        abstr_emp::ShowAll();
        cout << "The inchargeof is :" << inchargeof << endl;
    }
    virtual void SetAll()
    {
        abstr_emp::SetAll();
        cout << "Enter the inchargeof : ";
        cin >> inchargeof;
    }
};

class fink : virtual public abstr_emp
{
private:
    string reportsto;

protected:
    const string ReportsTo() const { return reportsto; }
    string &ReportsTo() { return reportsto; }

public:
    fink() : abstr_emp() { this->reportsto = "None"; }
    fink(const string &fn, const string &ln, const string &j, const string &rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {}
    fink(const abstr_emp &e, const string &rpo) : abstr_emp(e), reportsto(rpo) {}
    fink(const fink &e)
    {
        *this = e; //调用默认拷贝构造函数
    }
    virtual void ShowAll() const
    {
        abstr_emp::ShowAll();
        cout << "The reportsto is : " << reportsto << endl;
    }
    virtual void SetAll()
    {
        abstr_emp::SetAll();
        cout << "Enter the reportsto : ";
        cin >> reportsto;
    }
};

class highfink : public manager, public fink
{
public:
    highfink() : abstr_emp(), manager(), fink() {}
    highfink(const string &fn, const string &ln, const string &j, const string &rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}
    highfink(const abstr_emp &e, const string &rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo) {}
    highfink(const fink &f, int ico) : abstr_emp(f), fink(f), manager(f, ico) {}
    highfink(const manager &m, const string &rpo) : abstr_emp(m), manager(m), fink(m, rpo) {}
    highfink(const highfink &h);
    virtual void ShowAll() const
    {
        manager::ShowAll();
        fink::ShowAll();
    }
    virtual void SetAll()
    {
        manager::SetAll();
        fink::SetAll();
    }
};