#include<iostream>
using namespace std;
int main()
{
    //rows ->m, cols ->n
    int m;
    int n;
    cout<<"Enter number of rows:" ;
    cin>>m;
    cout<<"Enter number of colums:" ;
    cin>>n;
    for(int i=1; i<=m; i++) //rows ->
    {
        for(int j=1; j<=n; j++)//cols -> 
        { 
            cout<<" * " ;
        }
        cout<<endl;
         
    }
}