#include<iostream>
using namespace std;
class triangle
{
private:
    float L1,L2,L3;
public:
    triangle();
    void getdata();
    void display();
};

triangle :: triangle()
{
    L1 = 1;
    L2 = 1;
    L3 = 3;
}

void triangle :: getdata()
{
    cout<< "Enter the value of length 1:";
    cin>>L1;
    cout<< "Enter the value of length 2:";
    cin>>L2;
    cout<< "Enter the value of length 3:";
    cin>>L3;
}

void triangle :: display()
{
    if(L1==L2 && L2==L3)
        cout<<"It is an equilateral triangle."<<endl;
    if(L1==L2 || L2==L3 || L1==L3)
        cout<<"It is an isosceles triangle."<<endl;
    else
        cout<<"It is an scalene triangle."<<endl;
}


main()
{
    triangle obj;
    obj.getdata();
    obj.display();
}
