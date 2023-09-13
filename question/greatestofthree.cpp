#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"enter 1st number :" ;
    cin >> a;
    cout <<"enter 2nd number :" ;
    cin >> b; 
    cout <<"enter 3rd number:" ;
    cin >> c;

    if(a>b and a>c )
    {
        cout<<a<<"is greatest " ; 
    }
    
    else if(b>a and b>c )
    {
        cout<<b<<"is greatest " ;
    }
    else
    {
        cout<<c<<"is greatest";
    }
    
}