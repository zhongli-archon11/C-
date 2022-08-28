//Write a program to overload binary operator using friend function
#include<iostream>
using namespace std;

class num
{
    int a,b;
    public:
        num()
        {
            a=0;
            b=0;
        }

        num(int x, int y)
        {
            a=x;
            b=y;
        }

        void display()
        {
            cout<<"a="<<a<<endl
                <<"b="<<b;
        }

        friend num operator + (num f4, num f5)
        {
            num temp;
            temp.a=f4.a+f5.a;
            temp.b=f4.b+f5.a;
            return temp;
        }
};

int main()
{
    num f1(10,20),f2(30,40),f3;
    cout<<"\nf1:\n";
    f1.display();
    cout<<"\nf2:\n";
    f2.display();
    f3=f1+f2;
    cout<<"\nAddition:\n";
    f3.display();
}