#include "Head.h"
using std::cin;
using std::cout;
void Example_7()
{
    Complex a(3.0, 4.0);
    Complex c;
    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c)
    {
        cout << "c is " << c << '\n';
        cout << "complex conjugate is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
}

Complex::Complex()
{
    imaginary = 0;
    real = 0;
}

Complex::~Complex()
{
    // std::cout << "Bye!\n";
}

Complex::Complex(float real, float imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

Complex operator+(Complex x, Complex y)
{
    Complex Temp;
    Temp.real = x.real + y.real;
    Temp.imaginary = x.imaginary + y.imaginary;
    return Temp;
}

Complex operator-(Complex x, Complex y)
{
    Complex Temp;
    Temp.real = x.real - y.real;
    Temp.imaginary = x.imaginary - y.imaginary;
    return Temp;
}

Complex operator*(Complex x, Complex y)
{
    Complex Temp;
    Temp.real = x.real * y.real - x.imaginary * y.imaginary;
    Temp.imaginary = x.real * y.imaginary + x.imaginary * y.real;
    return Temp;
}

Complex operator*(float x, Complex y)
{
    Complex Temp;
    Temp.real = y.real * x;
    Temp.imaginary = y.imaginary *= x;
    return Temp;
}

Complex operator~(Complex x)
{
    Complex Temp;
    float temp = 0;
    temp = x.imaginary - 0;
    Temp.real = x.real;
    Temp.imaginary = x.imaginary - 2 * temp;
    return Temp;
}

std::ostream &operator<<(std::ostream &os, const Complex &T)
{
    os << "(" << T.real << "," << T.imaginary << "i)";
    return os;
}

std::istream &operator>>(std::istream &os, Complex &T)
{
    cout << "real: ";
    os >> T.real;
    cout << "imaginary: ";
    os >> T.imaginary;
    return os;
}
