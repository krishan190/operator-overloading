#include <iostream>
using namespace std;
class mystring
{
    char str[100];

public:
    void operator!();
    void input_str()
    {
        cout << "Enter the string : ";
        cin >> str;
    }
    void display_str()
    {
        cout << str;
    }
};
void mystring::operator!()
{
    for (int i = 0; str[i]!= '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << "\n\nReverse case string is : " << str;
}
int main()
{
    mystring s1;
    s1.input_str();
    cout << "\n\n string is: ";
    s1.display_str();
    !s1;
    return 0;
}