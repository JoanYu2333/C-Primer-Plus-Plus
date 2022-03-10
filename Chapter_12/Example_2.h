#ifndef EXAMPLE2_H_
#define EXAMPLE2_H_
#include "Head.h"
namespace EXAMPLE2
{
    using std::cin;
    using std::cout;
    using std::istream;
    using std::ostream;
    void Enter();
    class String
    {
    private:
        char *str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;

    public:
        String(const char *s);
        String();
        String(const String &);
        ~String();
        int length() const { return len; }
        String &Stringlow();
        String &StringUpper();
        int times(const char a) const;

        String &operator+(const String &s1);
        String &operator=(const String &);
        String &operator=(const char *);
        char &operator[](int i);
        const char &operator[](int i) const;

        friend char *operator+(const char *str, String &s1);
        friend bool operator<(const EXAMPLE2::String &st, const EXAMPLE2::String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st, const String &st2);
        friend ostream &operator<<(ostream &os, const String &st);
        friend istream &operator>>(istream &is, String &st);

        static int HowMany();
    };

    bool operator<(const String &st, const String &st2);
    ostream &operator<<(ostream &os, const String &st);
    char *operator+(const char *str, String &s1);
    istream &operator>>(istream &is, String &st);
}
#endif