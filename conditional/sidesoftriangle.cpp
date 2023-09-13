#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"enter number first:" ;
    cin >> a;
    cout <<"enter number second:" ;
    cin >> b; 
    cout <<"enter number third:" ;
    cin >> c;

    if((a+b)>c and (b+c)>a and (c+a)>b)
    {
        cout<<"valid triangle"<<endl; 
    }
    
    else 
    {
        cout<<"unvalid triangle"<<endl;
    }
    
}
