#include "Head.h"

void Example_5()
{
}

using std::cout;
Stonewt::Stonewt(double lbs)
{
    i_stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    d_pounds = lbs;
    i_pounds = d_pounds - pds_left;
    mode = int_stone;
}

Stonewt::Stonewt(int stn, double lbs)
{
    i_stone = stn;
    pds_left = lbs;
    d_pounds = stn * Lbs_per_stn + lbs;
    i_pounds = d_pounds - pds_left;
    mode = int_stone;
}

Stonewt::Stonewt()
{
    i_stone = d_pounds = i_pounds = 0;
    mode = int_stone;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &T)
{

    if (T.mode == Stonewt::int_stone)
        os << T.i_stone;
    if (T.mode == Stonewt::double_pounds)
        os << T.d_pounds;
    if (T.mode == Stonewt::int_pounds)
        os << T.i_pounds;
    return os;
}

Stonewt Stonewt::operator+(const Stonewt &T)
{
    Stonewt temp;
    temp.i_pounds = i_pounds + T.i_pounds;
    temp.d_pounds = d_pounds + T.d_pounds;
    temp.i_stone = i_stone + T.i_stone;
    return temp;
}

Stonewt Stonewt::operator-(const Stonewt &T)
{
    Stonewt temp;
    temp.i_pounds = i_pounds - T.i_pounds;
    temp.d_pounds = d_pounds - T.d_pounds;
    temp.i_stone = i_stone - T.i_stone;
    return temp;
}

Stonewt Stonewt::operator*(const Stonewt &T)
{
    Stonewt temp;
    temp.i_pounds = i_pounds * T.i_pounds;
    temp.d_pounds = d_pounds * T.d_pounds;
    temp.i_stone = i_stone * T.i_stone;
    return temp;
}