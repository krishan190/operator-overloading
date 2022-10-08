#include<iostream>
using namespace std;
class person
{
    int age;
    int rank;
    
    public:
    int getAge()
    {
        return age;
    }
    int getRank()
    {
        return rank;
    }
    person(int a,int r)
    {
        cout<<" paramerterized constructor called"<<endl;
        age = a;
        rank = r;
    }
    person(const person &p)
    {
        cout<<"copy constructor called"<<endl;
        age = p.age;
        rank = p.rank;
    }
    person()
    {
     cout<<"Default constructor called"<<endl;   
    }
    
    person operator + (person p)
    {
        person temp;
        temp.age=age + p.age;
        temp.rank =rank +p.rank;
        return temp;
    }

    person operator++() // pre increment
    {
        person temp;
        temp.age= ++age;
        temp.rank= ++rank;
        return temp;
    }
    person operator++(int useless) // post increment
    {
        person temp;
        temp.age = age++;
        temp.rank = rank++;
        return temp;
    }
    void display()
    {
        cout<<"person age "<<age<<" and rank"<<rank<<endl;
    }
     friend ostream& operator<<(ostream & os,person p);
};

ostream& operator<<(ostream &os,person p)
{
    cout<<"Extraction operator called"<<endl;
    cout<<"person age "<<p.age <<"and rank "<<p.rank<<endl;
    return cout;
}

int main() {

    person p1(20,23);
    person p2 = p1;
    person p3=p1+p2;
    cout<<endl;

    (++p3).display();
    (p3++).display();
     p3.display();
    cout<<endl;
    
    cout<<p3<<p1;
    cout<<"First "<<p1.getAge()<<endl;
    cout<<"second "<<p2.getRank()<<endl;
    cout<<"krishna age "<<p1.getAge()<<" and Rank "<<p1.getRank()<<endl;
    cout<<"utkarsh age "<<p3.getAge()<<" and Rank "<<p3.getRank()<<endl;
    return 0;
}