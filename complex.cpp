#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << endl
             << "real= " << a << "Imag= " << b << endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3,c4;
    c1.setData(4, 5);
    c2.setData(3, 9);
    c3 = c1 + c2; // c3=c1.add(c2)
    c1.showData();
    c2.showData();
    c3.showData();
    c4=-c3;
    c4.showData();
    cout << endl;
}