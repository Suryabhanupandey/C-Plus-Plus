#include<iostream>
using namespace std;
int main()
{ 
    int cp;
    cout<<"Enter cost price";
    cin>>cp;
    int sp;
    cout<<"Enter sellings price";
    cin>>sp;
    if(sp>cp)
    { 
    cout<<"Enter profit "<<sp-cp<<endl;
    }
    else if(sp<cp)
    {
        cout<<"Enter loss "<<cp-sp<<endl;
    }
    else
    {
        cout<<"no profit";
    }
}