#include "Head.h"

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    using namespace std;
    cout << "Enter the name" << endl;
    cin >> g.fullname;
    cout << "Enter the number" << endl;
    cin >> g.handicap;
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    using std::cout;
    using std::endl;
    cout << g.fullname << " " << g.handicap;
}
