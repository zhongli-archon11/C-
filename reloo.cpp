#include<iostream>
using namespace std;

class student
{
	int feet, inch;
	public:
		student()
		{
			feet=0;
			inch=0;
		}
		
		student(int f, int i)
		{
			feet=f;
			inch=i;
		}

		bool operator < (student d)
		{
			if(feet<d.feet)
				return true;
			else if(feet==d.feet && inch<d.inch)
				return true;
			else
				return false;
		}
};

int main()
{
	student n(5,0),s(5,3);
	if(n<s)
		cout<<"S is taller";
	else
		cout<<"N is taller";
}
