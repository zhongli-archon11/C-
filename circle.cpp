#include<iostream>
using namespace std;
class circle
{
private:
    float radius;
    float area, peri;
public:
    void getradius();
    void getarea();
    void getperimeter();
    void print();
};

void circle :: getradius()
{

    cout << "Enter radius: ";
    cin >> radius;
}

void circle :: getarea()
{
    area = (float)3.14*radius*radius;
}

void circle :: getperimeter ()
{
    peri = 2*3.14*radius;
}

void circle :: print()
{
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << peri << endl;
}

int main()
{
    circle obj;
    obj.getradius();
    obj.getarea();
    obj.getperimeter();
    obj.print();
}
