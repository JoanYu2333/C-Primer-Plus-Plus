#include "Head.h"

int Example_2()
{
    using namespace std;
    string input;
    cout << "Enter a line :\n";
    getline(cin, input);
    while (1)
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
        if (input == "")
        {
            break;
        }
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\"contains";
    for (auto it = str.begin(); it != str.end(); it++)
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters\n";
}