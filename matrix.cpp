#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    void getmatrix();
    void printmatrix();
    void print();
    friend matrix add(matrix p , matrix q);
    friend matrix multiply(matrix p, matrix q);
};

void matrix :: getmatrix()
{
    cout<<"Enter the matrix one by one:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}

void matrix :: printmatrix()
{
    cout<<"Addition of matrix is:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<< "  ";
        }
        cout<<"\n";
    }
}

matrix add(matrix p, matrix q)
{
    matrix t;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            t.a[i][j]=0;
            for(int k=0; k<3; k++)
            {
                t.a[i][j] = p.a[i][j] + q.a[i][j];
            }
        }
    }
    return t;
}

matrix multiply (matrix p, matrix q)
{
    matrix t;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            t.a[i][j]=0;
            for(int k=0; k<3; k++)
            {
                t.a[i][j] = t.a[i][j]+( p.a[i][k] * q.a[k][j]);
            }
        }
    }
    return t;
}


void matrix :: print()
{
    cout<<"Multiplication of matrix is:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<< "\t";
        }
        cout<<"\n";
    }
}


int main()
{
    matrix p,q,r,t;
    p.getmatrix();
    q.getmatrix();
    t=multiply(p,q);
    r=add(p,q);
    r.printmatrix();
    t.print();
}