#include<iostream>
using namespace std;

class num
{
	int a,b,c,d;
	public:
		num(int j, int k, int m, int l)
		{
			a=j;
			b=k;
			c=m;
			d=l;
		}
		void show(void);
		void operator ++();
};

void num::show()
{
	cout<<"\nA="<<a
		<<"\nB="<<b
		<<"\nC="<<c
		<<"\nD="<<d;
}

void num::operator ++()
{
	++a;
	++b;
	++c;
	++d;
}

int main ()
{
	num X(3,2,5,7);
	cout<<"\n Before increment of x: ";
	X.show();
	++X;
	cout<<"\n After increment of x: ";
	X.show();
	return 0;
}
