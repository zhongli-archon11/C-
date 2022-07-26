#include<iostream>
 #include<cmath>
 using namespace std;

 class point
 {
 private:
     float x;
     float y;
 public:
     point()
     {
         x=0;
         y=0;
     }
     point (int q)
     {
         x = y = q;
     }

     point(int a , int b)
     {
         x = a;
         y = b;
     }
     void showdata()
     {
         cout << "x=" << x << endl << "y=" << y << endl;
     }

     float scope()
     {
         float w;
         w = (float) y/x;
         return w;
     }

     friend float distance1(point,point);
 };

 float distance1 (point a, point b)
 {
     float res;
     res = sqrt(pow (a.x - b.x,2) + pow (a.y - b.y,2));
     return res;
 }

int main()
 {
     float val;
     point ob1(4,3), ob2(1,1);
     ob1.showdata();
     ob2.showdata();
     val = distance1(ob1,ob2);
     cout << "Distance: " << val << endl;
     cout << "Scope: " << ob1.scope() << endl;
 }