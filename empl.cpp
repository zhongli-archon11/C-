
#include<iostream>
using namespace std;
class employee
{
private:
    int emp_no;
    char emp_name[20];
    float emp_da;
    float emp_hra;
    float emp_basic;
    float net_pay;

public:
    void getdata();
    void calculate();
    void dispdata();
};

void employee :: getdata ()
{
    cout << "\nEnter employee ID:";
    cin >> emp_no;
    cout << "Enter employee name: ";
    cin >> emp_name;
    cout << "Enter employee basic: ";
    cin >> emp_basic;
    cout << "Enter employee hra: ";
    cin >> emp_hra;
    cout << "Enter employee da: ";
    cin >> emp_da;
}

void employee :: calculate()
{
    net_pay = (emp_basic + emp_hra + emp_da);
}

void employee :: dispdata()
{
    cout << "\n Detail of :" << emp_name;
    cout << "\n Employee ID: " << emp_no;
    cout << "\n Basic Salary: " << emp_basic;
    cout << "\n Employee DA: " << emp_da;
    cout << "\n Employee HRA: " << emp_hra;
    cout << "\n Net sales: " << net_pay;
    cout << endl;
}

main()
{
    employee emp[10];
    int i, num;
    cout << "\n Enter numbers of employee:";
    cin >> num;
    for(i=0; i<num; i++)
        emp[i].getdata();
    for(i=0; i<num; i++)
        emp[i].calculate();
    for(i=0; i<num; i++)
        emp[i].dispdata();
}
