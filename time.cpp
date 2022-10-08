#include <iostream>
using namespace std;
class Time
{
private:
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }
    friend int operator>>(istream &input, Time &t) // Overloading >> operator (cin)
    {
        cout << "\n Enter Hours:";
        input >> t.hours;
        cout << "\n Enter Minutes:";
        input >> t.minutes;
        cout << "\n Enter seconds:";
        input >> t.seconds;
        t.minutes = t.minutes + t.seconds / 60;
        t.seconds %= 60;
        t.hours = t.hours + t.minutes / 60;
        t.minutes %= 60;
        if (t.hours >= 25)
            return 1;
        else
            return 0;
    }
    friend void operator<<(ostream &output, Time &t) // Overloading << operator (cout)
    {
        cout << "\n Hours  :" << t.hours;
        cout << "\n Minutes :" << t.minutes;
        cout << "\n seconds  :" << t.seconds;
    }
    int operator==(Time t1)
    {
        int tot = hours * 3600 + minutes * 60 + seconds;
        int tot1 = t1.hours * 3600 + minutes * 60 + t1.seconds;
        if (tot == tot1)
            return 1;
        else
            return 0;
    }
    ~Time() {}
};
int main()
{
    Time t, t1;
    cout << "\n Enter First Time:";
    cout << "\n-----------------";
    if (cin >> t)
    {
        cout << "\n Invalid time ";
        return 0;
    }
    cout << "First Time:";
    cout << t;
    cout << "\n\n Enter second Time:";
    cout << "\n---------------------";
    if (cin >> t1)
    {
        cout << "\n Invalid time:";
        return 0;
    }
    cout << "Second Time:";
    cout << t1;
    if (t == t1)
        cout << "\n\n Times are same";
    else
        cout << "\n\n Times are Different";
    return 0;
}