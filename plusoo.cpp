#include<iostream>
using namespace std;

class num
{

		int x,y;
		
		public:
		num()
		{
			x=0;
			y=0;
		}
		
		num(int a, int b)
		{
			x=a;
			y=b;
		}
		
		void display()
		{
			cout<<"\n x="<<x
				<<"\n y="<<y<<endl;
		}
		
		num operator + (num D)
		{
			num temp;
			temp.x=x+D.x;
			temp.y=y+D.y;
			return temp;
		}	
};

int main()
{
	num n1(2,3),n2(4,5),n3;
	
	n3=n1+n2;
	n1.display();
	n2.display();
	n3.display();
}
