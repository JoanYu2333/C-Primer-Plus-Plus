#include "Head.h"

void Example_2(CandyBar &A, char *name = "Milennium Munch", double weight = 2.85, int heat = 350)
{
    A.name = name;
    A.weight = weight;
    A.heat = heat;
}

void Example_2(const CandyBar &A)
{
    cout << A.name << endl
         << A.weight << endl
         << A.heat;
}