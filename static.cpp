#include<iostream>
using namespace std;

class student
{
    private:
        char name[20];
        int roll_no;
        static int id;
    public:
        static int generateid()
        {
            return id++;
        }
        void getdata()
        {
            roll_no = student::generateid();
            cout<<"Enter the name: ";
            cin>>name;
        }

        void display()
        {
            cout<<name<<"\t"<<roll_no<<endl;
        }
};

int student::id=1111;

int main()
{
    int i;
    student s[5];
    for(i=0;i<5;i++)
        s[i].getdata();
    cout<<"Name\t "<<"Roll no\t"<<endl;
    for(i=0;i<5;i++)
        s[i].display();
}