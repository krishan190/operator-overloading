#include<iostream>
using namespace std;
class Number
{
    int x,y,z;
    public:
    void accept()
    {
        cout<<"\n Enter three numbers:";
        cout<<"\n--------------------";
        cout<<"\n First Number:";
        cin>>x;
        cout<<"\n Second Number:";
        cin>>y;
        cout<<"\n Third Number:";
        cin>>z;
        cout<<"\n------------------";
    }
    void display()
    {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z;
    }
    void operator- ()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    Number num;
    num.accept();
    cout<<"\n Numbers are :\n\n";
    num.display();
    -num;
    cout<<"\n\n Negated Numbers are:\n\n";
    num.display();
}