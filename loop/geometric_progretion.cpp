#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin >> n;
    int a=1;
    for(int i=1; i<=n; i++)
    {
        cout<<" "<<a<<endl;
        a=a*2;
    }
}