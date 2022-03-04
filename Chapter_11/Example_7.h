#ifndef EXAMPLE_7_HEAD
#define EXAMPLE_7_HEAD
#include <iostream>
#include <cmath>
void Example_7();
class Complex
{
private:
    float imaginary;
    float real;

public:
    Complex(float imaginary, float real);
    Complex();
    ~Complex();

    friend Complex operator+(Complex x, Complex y);
    friend Complex operator-(Complex x, Complex y);
    friend Complex operator*(Complex x, Complex y);
    friend Complex operator~(Complex x);
    friend Complex operator*(float x, Complex y);
    //其实上述运算符重载最好为类函数

    friend std::ostream &operator<<(std::ostream &os, const Complex &T);
    friend std::istream &operator>>(std::istream &os, Complex &T);
};

#endif