#include "Example_4.h"

void Example_4()
{
    double vals1[12] = {1220, 1100, 1122, 2212, 1232, 2334,
                        2884, 2393, 3302, 2922, 3002, 3544};
    double vals2[12] = {12, 11, 22, 21, 32, 34,
                        28, 29, 33, 29, 32, 35};
    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar", 2012, vals2, 12);
    cout << "First try block:\n";
    try
    {
        int i;
        cout << "Year = " << sales1.Year() << endl;
        for (int i = 0; i < 12; ++i)
        {
            cout << sales1[i] << " ";
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "Year = " << sales2.Year() << endl;
        cout << "Label = " << sales2.Label() << endl;
        for (int i = 0; i <= 12; ++i)
        {
            cout << sales2[i] << ' ';
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "End of try block 1.\n";
    }
    catch (Sales::bad_index &bad)
    {
        Sales::bad_index *ptr = &bad;
        if (typeid(bad) == typeid(LabeledSales::nbad_index))
        {
            LabeledSales::nbad_index *p = (LabeledSales::nbad_index *)ptr;
            cout << "Company: " << p->label_val() << endl;
        }
        cout << bad.what();
        cout << "bad index: " << bad.bi_val() << endl;
    }
    cout << "\nNext try block:\n";
    try
    {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        cout << "End of try block 2.\n";
    }
    /*
    catch (LabeledSales::nbad_index &bad)
    {
        cout << bad.what();
        cout << "Company: " << bad.label_val() << endl;
        cout << "bad index: " << bad.bi_val() << endl;
    }
    */
    catch (Sales::bad_index &bad)
    {
        Sales::bad_index *ptr = &bad;
        if (typeid(bad) == typeid(LabeledSales::nbad_index))
        {
            LabeledSales::nbad_index *p = (LabeledSales::nbad_index *)ptr;
            cout << "Company: " << p->label_val() << endl;
        }
        cout << bad.what();
        cout << "bad index: " << bad.bi_val() << endl;
    }
    cout << "done\n";
}

Sales::bad_index::bad_index(int ix, const string &s) : std::logic_error(s), bi(ix)
{
}

Sales::Sales(int yy)
{
    year == yy;
    for (int i = 0; i < MONTHS; ++i)
    {
        gross[i] = 0;
    }
}

Sales::Sales(int yy, const double *gr, int n)
{
    year = yy;
    int lim = (n < MONTHS) ? n : MONTHS;
    int i;
    for (i = 0; i < lim; ++i)
    {
        gross[i] = gr[i];
    }
    for (; i < MONTHS; ++i)
        gross[i] = 0;
}

double Sales::operator[](int i) const
{
    if (i < 0 or i >= MONTHS)
        throw bad_index(i);
    return gross[i];
}

double &Sales::operator[](int i)
{
    if (i < 0 or i >= MONTHS)
        throw bad_index(i);
    return gross[i];
}

LabeledSales::nbad_index::nbad_index(const string &lb, int ix, const string &s) : Sales::bad_index(ix, s)
{
    lbl = lb;
}

LabeledSales::LabeledSales(const string &lb, int yy) : Sales(yy)
{
    label = lb;
}

LabeledSales::LabeledSales(const string &lb, int yy, const double *gr, int n) : Sales(yy, gr, n)
{
    label = lb;
}

double LabeledSales::operator[](int i) const
{
    if (i < 0 or i >= MONTHS)
        throw nbad_index(Label(), i);
    return Sales::operator[](i);
}

double &LabeledSales::operator[](int i)
{
    if (i < 0 or i >= MONTHS)
        throw nbad_index(Label(), i);
    return Sales::operator[](i);
}