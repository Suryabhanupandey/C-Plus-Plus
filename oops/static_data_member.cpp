#include<iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    public:
    void setdata(void)
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
    }
    void getdata(void)
    {
        cout<<"The id of this employee is :"<<id<<"and this is employee number "<<count<<endl;
    }
    static void getcount(void)
    {
        // cout<<id; //throws an error
    cout<<"The value of count is" <<count<<endl;
    }
};
//count is the static data member of class Employee
int Employee::  count; //default value is Zero
int main()
{
    Employee surya,vinay,abhi;
    surya.setdata();
    surya.getdata();
    Employee::getcount();

    vinay.setdata();
    vinay.getdata();
    Employee::getcount();

    abhi.setdata();
    abhi.getdata();
    Employee::getcount();

    return 0;

}