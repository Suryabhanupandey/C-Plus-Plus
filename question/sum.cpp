// WAP to print sum of digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number:"<<endl;
    cin>>n;
    int sum = 0;
    while(n!=0) 
    { 
    int id =n%10;
    n/=10;// n=n/10;
    sum += id;
    }
    cout<<sum;
}