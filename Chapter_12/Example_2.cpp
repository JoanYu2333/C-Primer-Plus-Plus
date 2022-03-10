#include "Example_2.h"
namespace EXAMPLE2
{
    int String::num_strings = 0;
    int String::HowMany()
    {
        return num_strings;
    }

    String::String(const char *s)
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
        num_strings++;
    }

    String::String()
    {
        len = 4;
        str = new char[1];
        str[0] = '\0';
        num_strings++;
    }

    String::String(const String &st)
    {
        num_strings++;
        len = st.len;
        str = new char[len + 1];
        strcpy(str, st.str);
    }

    String::~String()
    {
        --num_strings;
        delete[] str;
        cout << "Bye";
    }

    String &String::operator=(const String &st)
    {
        if (this == &st)
        {
            return *this;
        }
        delete[] str;
        len = st.len;
        str = new char[len + 1];
        strcpy(str, st.str);
        return *this;
    }

    String &String::operator=(const char *s)
    {
        delete[] str;
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
        return *this;
    }

    char &String::operator[](int i)
    {
        return str[i];
    }

    const char &String::operator[](int i) const
    {
        return str[i];
    }

    bool operator>(const String &st1, const String &st2)
    {
        return st2 < st1;
    }
    bool operator==(const String &st1, const String &st2)
    {
        return (std::strcmp(st1.str, st2.str) == 0);
    }

    String &String::Stringlow()
    {
        int i = 0;
        while (this->str[i] != '\0')
        {
            this->str[i] = tolower(this->str[i]);
            i++;
        }
        return *this;
    }

    String &String::StringUpper()
    {
        int i = 0;
        while (this->str[i] != '\0')
        {
            this->str[i] = toupper(this->str[i]);
            i++;
        }
        return *this;
    }

    int String::times(const char a) const
    {
        int i = 0;
        int times = 0;
        while (this->str[i] != '\0')
        {
            if (this->str[i] == a)
            {
                times++;
            }
            i++;
        }
        return times;
    }

    String &String::operator+(const String &s1)
    {
        //*this = "sadad"; success
        // strcat(this->str, s1.str);
        char temp[CINLIM];
        strcpy(temp, str);
        strcat(temp, s1.str);
        delete[] str;
        str = new char[strlen(temp) + strlen(s1.str)];
        strcpy(str, temp);
        this->len += s1.len;
        return *this;
    }
}

bool EXAMPLE2::operator<(const EXAMPLE2::String &st, const EXAMPLE2::String &st2)
{
    return (strcmp(st.str, st2.str) < 0);
}

EXAMPLE2::ostream &EXAMPLE2::operator<<(EXAMPLE2::ostream &os, const EXAMPLE2::String &st)
{
    os << st.str;
    return os;
}

char *EXAMPLE2::operator+(const char *str, EXAMPLE2::String &s1)
{
    int len = strlen(str) + strlen(s1.str);
    char *temp = new char[len + 1]; //未删除
    memset(temp, '\0' ,len + 1);
    // strcpy(temp, str);
    strcat(temp, s1.str);
    return temp;
}

EXAMPLE2::istream &EXAMPLE2::operator>>(EXAMPLE2::istream &is, EXAMPLE2::String &st)
{
    char temp[EXAMPLE2::String::CINLIM];
    is.get(temp, EXAMPLE2::String::CINLIM);
    if (is)
        st = temp;
    while (is and is.get() != '\n')
        continue;
    return is;
}

void EXAMPLE2::Enter()
{
    String s1(" and I am a C++ student.");
    String s2 = "Please enter your name: ";
    String s3;
    cout << s2;
    cin >> s3;
    char *ptr = "My name is " + s3;
    // s2 = ptr;
    delete[] ptr;
    cout << s2 << ".\n";
    s2 = s2 + s1;
    s2.StringUpper();
    cout << "The string\n"
         << s2 << "\ncontains " << s2.times('A') << " 'A' characters in it.\n";
    s1 = "red";
    String rgb[3] = {String(s1), String("green"), String("blue")};
    cout << "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.Stringlow();
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i])
            {
                cout << "That's right!\n";
                success = true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << "Try again!\n";
    }
    cout << "Bye\n";
}