#include<iostream>
#include<cstring>
using namespace std;

class myString
{
    char *a;
    int size;

public :
    myString()
    {
        cout<<"Default Called"<<endl;
        a = (char *)malloc(1);
        size = 1;
    }
    myString(char * str)
    {
        cout<<"String Constructor called"<<endl;
        size = strlen(str);
        a = (char *)malloc(size + 1);
        strcpy(a , str);
    }

    myString(const myString &s)
    {
        cout<<"Copy Constructor called"<<endl;
        size = strlen(s.a);
        a = (char *)malloc(size + 1);
        strcpy(a , s.a);
    }

    myString & operator=(const myString &s)
    {
        cout<<"Assignment Operator called"<<endl;
        if(a == s.a)
        {
            return *this;
        }
        free(a);              //To free existing location
        size = strlen(s.a);
        a = (char *)malloc(size + 1);
        strcpy(a , s.a);
        return *this;
    }

    void display()
    {
        cout<<a<<endl;
    }

    void change(char *str)
    {   free(a);
        size = strlen(str);
        a = (char *)malloc(size +1);
        strcpy(a,str);
    }
};

int main()
{

    myString s1("krishan");
    myString s2 = s1;
    myString s3;              //Default constructor called
    myString s4("MyName");
    myString s5;
    
    s3=s1;
    s4=s1;

    s1=s1; //assignment opeartor()
    
    s5=s4=s1; //assignment operator
    

    s1.change("Namdev");
    s1.display();
    s2.display();
    s3.display(); 
    s4.display();
    s5.display();

    return 0;
}

//output 

// String Constructor called
// Copy Constructor called
// Default Called
// String Constructor called
// Default Called
// Assignment Operator called
// Assignment Operator called
// Assignment Operator called
// Assignment Operator called
// Assignment Operator called
// Namdev
// krishan
// krishan
// krishan
// krishan