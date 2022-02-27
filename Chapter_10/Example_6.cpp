#include "Head.h"

void Example_6()
{
    Move a(1, 4);
    Move b(3, 5);
    Move ptr = a.add(b);
    ptr.showmove();
    // Move* ptr = &a.add(b);
    // ptr->showmove();
}

Move::Move(double a, double b)
{
    this->x = a;
    this->y = b;
}

Move::~Move()
{
}

void Move::showmove() const
{
    cout << this->x << this->y;
}

Move Move::add(const Move &m) const
{
    Move *p = new Move(this->x + m.x, this->y + m.y);
    return *p;
}