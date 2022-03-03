#ifndef EXAMPLE_5_HEAD
#define EXAMPLE_5_HEAD

#include <iostream>
void Example_5();

class Stonewt
{
public:
    enum Mode
    {
        int_stone,
        double_pounds,
        int_pounds
    };

private:
    /* data */
    static const int Lbs_per_stn = 14;
    int i_stone;
    int i_pounds;
    double pds_left;
    double d_pounds;
    Mode mode;

public:
    Stonewt(/* args */);
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    ~Stonewt();

    Stonewt operator+(const Stonewt &T);
    Stonewt operator-(const Stonewt &T);
    Stonewt operator*(const Stonewt &T);
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &T);
};

#endif