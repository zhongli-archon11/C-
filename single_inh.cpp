//Write a program to show the order of constructor call in single inheritance
#include<iostream>
using namespace std;

class parent
{
    public:
        parent()
        {
            cout<<"Inside base class"<< endl;
        }
};

class child:public parent
{
    public:
        child()
        {
            cout<<"Inside sub class"<<endl;
        }
};

int main()
{
    child obj;
    return 0;
}