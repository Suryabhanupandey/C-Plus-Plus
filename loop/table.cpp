#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    for(int i=n*1; i<=n*10; i++)
    {
        if(i%n==0)
        cout<<" "<<i<<endl;
    }

}