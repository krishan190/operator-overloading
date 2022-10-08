#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];

public:
    void input();
    void display();
    void operator-(); // overload - unary operator
};
void Matrix ::input() // Accepting value from the user:
{
    cout << "\n Enter the matrix value (3X3) " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " ";
            cin >> a[i][j];
        }
    }
}
void Matrix ::display() // function for displaying the matrix
{
    cout << "Matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " ";
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
void Matrix ::operator-()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = -a[i][j];
        }
    }
}
int main()
{
    Matrix m;
    m.input();
    m.display();
    -m;
    m.display();
}