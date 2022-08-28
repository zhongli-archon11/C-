//Write a program to overload unary operator using friend function
#include<iostream>
using namespace std;

class friend_demo
{
    int a;
    public:
    friend_demo()
    {
        a=0;
    }

    friend_demo(int x)
    {
        a=x;
    }

    void display()
    {
        cout<<a;
    }

    friend friend_demo operator - (friend_demo f3)
    {
        f3.a=-f3.a;
        return f3;
    }
};

int main()
{
    friend_demo f1(10), f2;
    cout<<"\nBefore negation:";
    f1.display();
    f2=-f1;
    cout<<"\nAfter negation:";
    f2.display();
}