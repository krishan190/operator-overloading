#include<iostream>
#include<string.h>
using namespace std;
class cstring
{
   public:
   char str[20];
   public:
   void getstring()
   {
       cout<<"\n Enter string:";
       cin>>str;
   }
   void display()
   {
       cout<<str<<endl;
   }
   cstring operator+(cstring x) //concatenating string
   {
       cstring s;
       strcpy(s.str,str);
       strcpy(s.str,x.str);
       return s;
   }
   char operator==(cstring &t); //comparing string
};
char cstring::operator==(cstring &t)
{
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;t.str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}
int main()
{
    cstring str1,str2,str3;
    int result=0;
    str1.getstring();
    str2.getstring();
    cout<<"\n -------------------------";
    cout<<"\n \n First string is. :";
    str1.display();
    
    cout<<"\n\n Second string is  :";
    str2.display();
    
    cout<<"\n----------------------------";
    str3=str1+str2;
    cout<<"\n\n Concatenated string is :";
    str3.display();
    
    result=str1==str2;
    if(result==0)
    {
        cout<<"\n\nBoth strings are equal:";
    }
    else
    cout<<"\n\n Both strings are not equal:";
    return 0;
}