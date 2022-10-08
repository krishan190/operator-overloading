#include<iostream>
using namespace std;
class fraction
{
  private:
    long num,deno;
  public:
  fraction (long int n=0,long int d=0)
  {
      num=n;
      deno=d;
  }
  friend void operator>>(istream &in ,fraction &f)
  {
      cout<<"\n Numerator:";
      in>>f.num;
      cout<<"\n Denominaor:";
      in>>f.deno;
  }
  friend void operator<<(ostream &out,fraction &f)
  {
     out<<f.num<<"/"<<f.deno;
  }
  fraction operator ++()//pre
  {
      ++num;
      ++deno;
      return (*this);
  }
  fraction operator ++(int a)//post
  {
      fraction tmp=*this;
      num++;
      deno++;
      return tmp;
  }
};
int main()
{
    fraction f1,f2;
    cout<<"\n f1: ";
    cout<<f1;
    cout<<"\n f2 : ";
    cout<<f2;
    
    cout<<"\n\n Enter 1st fraction value \n";
    cin>>f1;
    cout<<"\n f1++ :";
    f1++;
    cout<<f1;
    cout<<"\n ++f1:";
    ++f1;
    cout<<f1;
    
    cout<<"\n\n Enter 2nd fraction value:";
    cin>>f2;
    f2=++f1;
    cout<<"\n f2 = ++f1 :";
    cout<<"\n f1.  :"<<f1;
    cout<<"\n f2   :"<<f2;
    f2=f1++;
    cout<<"\n\n f2 = f1++";
    cout<<"\n f1=  :"<<f1;
    cout<<"\n f1=. :"<<f2;
    return 0;
}