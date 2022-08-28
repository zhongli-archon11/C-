//Write a program using statc variable
#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;
    public:
        void getdata(int a)
        {
            number = a;
            count ++;
        }

        void getcount()
        {
            cout<<"The number:"<<count<<endl;
        }
};

int item :: count;

int main()
{
    item a,b,c;

    cout<<"Before increment:\n";
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(10);
    b.getdata(20);
    c.getdata(30);

    cout<<"\nAfter increment:\n";
    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}