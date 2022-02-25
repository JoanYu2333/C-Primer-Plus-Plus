#include "Head.h"

void Example_3()
{
    cout << "Enter a string (q to quit) : " << endl;
    string S;
    while (1)
    {
        cin >> S;
        if (S == "q")
        {
            cout << "Bye .";
            break;
        }
        Example_3(S);
        cout << "Next string (q to quit) : " << endl;
    }
}

void Example_3(string &S)
{
    int i = 0;
    for (auto it = S.begin(); it != S.end(); it++, i++)
    {
        S.at(i) = toupper(S.at(i));
    }
    cout << S << endl;
}