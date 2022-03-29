#include "Example_5.h"

ostream &operator<<(ostream &os, const abstr_emp &e)
{
    os << "The fname is : " << e.fname;
    os << "\nThe lname is : " << e.lname;
    os << "\nThe job is : " << e.job << endl;
    return os;
}

abstr_emp::~abstr_emp()
{
}

void Example_5()
{
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();
    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();
    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();
    highfink hf(ma, "Curly Kew");
    hf.ShowAll();
    cout << "Press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();
    cout << "Using an abstr_emp *pointer:\n";
    abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
    {
        tri[i]->ShowAll();
    }
}