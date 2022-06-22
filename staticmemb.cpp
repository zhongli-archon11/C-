#include<iostream>
using namespace std;

class student
{
	private:
		char name[20];
		int roll_no;
		static int id;
	public:
		static int generated()
		{
			return id++;
		}
		
		void getdata()
		{
			roll_no= student::generated();
			cout<<"Enter the name: ";
			cin>>name;
		}
		void display()
		{
			cout<<name<<roll_no<<endl;
		}
};

int student::id=1111;

main()
{
	int i;
	student s[5];
	for(i=0;i<5;i++)
		3[i].getdata();
		cout<<"Name: "<<"\nRoll No.:"<<enl;
	for(i=0;i<5;i++)
	3[i].display();
}
