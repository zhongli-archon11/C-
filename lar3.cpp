#include<iostream>
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
	
	if (a>=b && a>=c)
		cout<<"Maximum of "<<a<<","<<b<<" and "<<c<<" is "<<a<<endl;
	else if (b >= c)
		cout<<"Maximum of "<<a<<","<<b<<" and "<<c<<" is "<<b<<endl;
	else
		cout<<"Maximum of "<<a<<","<<b<<" and "<<c<<" is "<<c<<endl;
                
}
