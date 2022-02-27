#include "Head.h"

golf::golf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int golf::setgolf(golf &g)
{
    cout << "Enter the name" << endl;
    char array[50];
    char *ptr = array;
    int hc = 0;
    cin >> array;
    cout << "Enter the number" << endl;
    cin >> hc;
    g = golf(*this, array, hc);
    return 1;
}

void golf::sethandicap(golf &g, int hc)
{
    g.handicap = hc;
}

void golf::showgolf(const golf &g)
{
    cout << g.fullname << " " << g.handicap;
}
