// WAP to count digit of a given number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number:"<<endl;
    cin>>n;
    int count = 0;
    while(n!=0) 
    { 
    n=n/10;
    count++;
    }
    cout<<count;
}