#include "Head.h"
void Example_4();
const int SIZE = 3;
class Person
{
private:
    string name_first;
    string name_last;

public:
    Person() : name_first("Yu"), name_last("Joan") {}
    virtual void Show(); // Display Name
    virtual ~Person() {}
};

class Gunslinger : virtual public Person
{
private:
    int number;

public:
    Gunslinger() : Person(), number(5) {}
    double Draw(); // Display the time of shot
    void Show();
};

class PokerPlayer : virtual public Person
{
public:
    PokerPlayer() : Person() {}
    int Draw();
};

class BadDude : public Gunslinger, public PokerPlayer
{
private:
public:
    BadDude() : Person(), Gunslinger(), PokerPlayer() {}
    int Gdraw();
    int Cdraw();
    void Show();
};