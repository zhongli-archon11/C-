#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		number(){}//zero argument constructor
		
		number(int j, int k)
		{
			x=j;
			y=k;
		}
		
		number operator + (number D)
		{
			number T;
			T.x=x+D.x;
			T.y=y+D.y;
			return T;
		}
		
		void show()
		{
			cout<<"\n x="<<x
				<<"\n y="<<y;
		}
};

int main()
{
	number A(2,3),B(4,5),C;
	A.show();
	B.show();
	C.show();
}
