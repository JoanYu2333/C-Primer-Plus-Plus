#include "Head.h"
void Example_2();
class Pair
{
private:
    valarray<int> number;
    valarray<int> production_date;

public:
    Pair() { number = production_date = 0; }
    Pair(const int *l, const int *y, int n) : number(l, n), production_date(y, n) {}
    Pair &operator=(Pair &st);
    int sum();
    void Get(int i) const;
    ~Pair() {}
};

class Wine : private Pair
{
private:
    string name;
    int year;

public:
    Wine(const char *l, const int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);
    string &Label();
    int sum();
    void GetBottles();
    ~Wine() {}
    void Show() const;
};
