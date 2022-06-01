#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter number 1: ";
	cin>>a;
	cout<<"Enter number 2: ";
	cin>>b;
	cout<<"Enter number 3: ";
	cin>>c;
	
	cout<<setw(6)<<"a= "<<setw(6)<<a<<endl
		<<setw(6)<<"b= "<<setw(6)<<b<<endl
		<<setw(6)<<"c= "<<setw(6)<<c<<endl;
}
