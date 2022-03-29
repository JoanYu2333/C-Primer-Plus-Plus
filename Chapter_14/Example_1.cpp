#include "Example_1.h"
namespace EXAMPLE1
{

    void Example_1()
    {
        cout << "Enter name of wine: ";
        char lab[50];
        cin.getline(lab, 50);
        cout << "Enter number of years: ";
        int yrs;
        cin >> yrs;
        Wine holding(lab, yrs);
        holding.GetBottles();
        holding.Show();

        const int YRS = 3;
        int y[YRS] = {1993, 1995, 1998};
        int b[YRS] = {48, 60, 72};
        Wine more("Gushing Grape red", YRS, b, y);
        more.Show();
        cout << "Total bottles for " << more.Label() << ": " << more.sum() << endl;
        cout << "Bye\n";
    }

    Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : name(l), information(yr, bot, y)
    {
        year = y;
    }

    void Pair::Get(int i) const
    {
        cout << "        " << this->production_date[i];
        cout << "    " << this->number[i] << endl;
    }

    Wine::Wine(const char *l, int y) : name(l)
    {
        year = y;
    }

    void Wine::Show() const
    {
        cout << "Wine: " << this->name << endl;
        cout << "        "
             << "Year"
             << "    "
             << "Bottles" << endl;
        for (auto i = 0; i < this->year; i++)
        {
            this->information.Get(i);
        }
    }

    Pair &Pair::operator=(Pair &st)
    {
        number = st.number;
        production_date = st.production_date;
        return *this;
    }

    void Wine::GetBottles()
    {
        cout << "Enter " << this->name << " "
             << "data "
             << "for " << this->year << " "
             << "year(s): \n";
        int array_year[this->year] = {0};
        int array_bottles[this->year] = {0};
        for (auto i = 0; i < this->year; i++)
        {
            cout << "Enter year: ";
            cin >> array_year[i];
            cout << "Enter bottles for that year: ";
            cin >> array_bottles[i];
        }
        Pair temp(array_bottles, array_year, this->year);
        this->information = temp;
    }

    string &Wine::Label()
    {
        return this->name;
    }

    int Pair::sum()
    {
        return this->number.sum();
    }

    int Wine::sum()
    {
        return this->information.sum();
    }

}