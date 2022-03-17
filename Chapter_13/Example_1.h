#ifndef EXAMPLE1_H_
#define EXAMPLE1_H_

#include "head.h"
void Example_1();

class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;

public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
private:
    char str[50];

public:
    Classic();
    Classic(char *s1, char *s2, char *s3, int n, double x);
    ~Classic();
    void Report() const;
    Classic &operator=(const Classic &d);
};

#endif