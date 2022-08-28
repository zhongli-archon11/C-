//Write a program to show the order of constructor call in multiple inheritance
#include<iostream>
using namespace std;

class parent1
{
    public:
        parent1()
        {
            cout<<"Inside first base class"<<endl;
        }
};

class parent2
{
    public:
        parent2()
        {
            cout<<"Inside second base class"<<endl;
        }
};

class child:public parent1, public parent2
{
    public:
        child()
        {
            cout<<"Inside child class"<<endl;
        }
};

int main()
{
    child obj;
    return 0;
}