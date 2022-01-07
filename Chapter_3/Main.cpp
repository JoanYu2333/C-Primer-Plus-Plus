/**
 * @File Name: Main.cpp
 * @Brief : 
 * @Author : YuJoan (yujoan2333@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-01-07
 * 
 */

#include "Head.h"

int main()
{
    Example_6();
    system("pause");
    return 0;
}

void Example_1()
{
    using namespace std;
    const int factor = 100;
    int height;
    int height_mi;
    int height_cm;
    cout << "Enter your height by cm" << endl;
    cin >> height;
    cout << "Your height is " << height / factor << " m " << height % factor << " cm";
}

void Example_2()
{
    using namespace std;
    float weight_g;
    float weight_kg;
    float height;
    cout << "Enter your height by cm and weight by g" << endl;
    cin >> height;
    cin >> weight_g;
    weight_kg = weight_g / 2; //convert g to kg
    height = height / 100;    //convert cm to m
    cout << "Your BMI is " << weight_kg / (height * height);
}

void Example_3()
{
    using namespace std;
    float degress, minutes, seconds;
    cout << "Enter a latitude in degress, minutes, and seconds" << endl;
    cout << "First , enter the degress: ";
    cin >> degress;
    cout << "Next , enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally , enter the seconds of arc: ";
    cin >> seconds;
    cout << degress << "degress, " << minutes << "minutes, " << seconds << "seconds "
         << " = " << degress + minutes / 60 + seconds / 3600;
}

void Example_4()
{
    using namespace std;
    long time;
    const int rate_day = 3600 * 24;
    const int rate_hour = 3600;
    const int rate_minute = 60;
    cout << "Enter the number of seconds: ";
    cin >> time;
    int days = time / rate_day;
    int hours = (time - days * rate_day) / rate_hour;
    int minutes = (time - days * rate_day - hours * rate_hour) / rate_minute;
    int seconds = time - days * rate_day - hours * rate_hour - minutes * rate_minute;
    cout << time << " seconds = " << days << "days, " << hours << "hours, " << minutes << "minutes, " << seconds << "seconds";
}

void Example_5()
{
    using namespace std;
    long long people_global;
    long long people_American;
    cout << "Enter the worlds's population: ";
    cin >> people_global;
    cout << "Enter the pupulation of USA: ";
    cin >> people_American;
    double rate = double(people_American * 100) / double(people_global);
    cout << "The population of the US is " << rate << " % of the world population.";
}

void Example_6()
{
    using namespace std;
    float Km;
    float rate;
    float L;
    cout << "Enter the KM and L: ";
    cin >> Km;
    cin >> L;
    rate = Km / L;
    cout << "The KM/L is " << rate;
}

void Example_7()
{
    using namespace std;
    float USA;
    float EU;
    cout << "Enter the EU : ";
    cin >> EU;
    float rate = 62.14 / 100;
    USA = EU / 3.875 * rate;
}