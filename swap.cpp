#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}

int main()
{
	int x,y;
	x=250;
	y=500;
	
	cout<<"The numbers are:\n"<<"x= "<<x<<endl<<"y= "<<y<<endl;
	swap(x,y);
	cout<<"After swapping:\n"<<"x= "<<x<<endl<<"y= "<<y<<endl;
}



