#ifndef EXAMPLE4_H_
#define EXAMPLE4_H_
#include "head.h"

class Port
{
private:
    char *brand;
    char style[20];
    int bottles;

public:
    Port(const Port &p);
    Port(const char *br = "none", const char *st = "none", int b = 0);
    virtual ~Port() { delete[] brand; }
    Port &operator=(const Port &p);
    Port &operator+=(int b);
    Port &operator-=(int b);
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream &operator<<(ostream &os, const Port &p);
};

class VintagePort : public Port
{
private:
    char *nickname;
    int year;

public:
    VintagePort();
    ~VintagePort() { delete[] nickname; }
    VintagePort(const char *br, int b, const char *nn, int y);
    VintagePort(const VintagePort &vp);
    VintagePort &operator=(const VintagePort &vp);
    void Show() const;
    friend ostream &operator<<(ostream &os, const VintagePort &vp);
};
#endif