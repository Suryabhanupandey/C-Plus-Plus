#include<iostream>
using namespace std;
class employee
{
    public:
    string Name;
    string Company;
    int Age;
    void intoduceyourself()
    {
        cout<<"Name - "<<Name<<endl;
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
    }
};
int main()
{
    
    employee employee1;
    employee1.Name="Suryabhanu Pandey";
    employee1.Company="Microsoft";
    employee1.Age=18;
    employee1.intoduceyourself();

    employee employee2;
    employee2.Name="Abhishek Pandey";
    employee2.Company="Apple";
    employee2.Age=14;
    employee2.intoduceyourself();

}