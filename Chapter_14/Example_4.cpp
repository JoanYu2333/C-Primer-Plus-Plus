#include "Example_4.h"

void Example_4()
{
    int ct;
    Person *ptr[SIZE] = {nullptr};
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
             << "w:waiter s:singer "
             << "t: singing waiter q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
        case 'w':
            ptr[ct] = new Gunslinger;
            break;
        case 's':
            ptr[ct] = new PokerPlayer;
            break;
        case 't':
            ptr[ct] = new BadDude;
            break;
        }
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        ptr[i]->Show();
    }
    for (i = 0; i < ct; i++)
    {
        delete ptr[i];
    }
    cout << "Bye.\n";
}

void Person::Show()
{
    cout << "The Person's first name is: " << this->name_first;
    cout << "\nThe Person's last name is: " << this->name_last;
}

double Gunslinger::Draw()
{

    std::default_random_engine random(time(NULL));
    std::uniform_int_distribution<> dis(0, 3);
    return dis(random);
}

void Gunslinger::Show()
{
    cout << "The Gunslinger number is: " << this->number;
    cout << "\nThe Gunslinger shot time is: " << this->Draw();
}

int PokerPlayer::Draw()
{
    std::default_random_engine random(time(NULL));
    std::uniform_int_distribution<int> dis(1, 52);
    return dis(random);
}

int BadDude::Gdraw()
{
    return Gunslinger::Draw();
}

int BadDude::Cdraw()
{
    return PokerPlayer::Draw();
}

void BadDude::Show()
{
    cout << "This is BadDude Show";
}
