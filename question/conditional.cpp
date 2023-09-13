//Take input parcentage of a student and print the the Grade according to marks:
/* 1. 81-100 very good
   2. 61-80 good
   3.41-60 Average
   4. <=40 Fail
*/ 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter mark:";
    cin>>n;
    if(n>=81 and n<=100)
    {
        cout<<"very good";
    }
    else if(n>=61 and n<=80)
    {
        cout<<" good";
    }
    else if(n>=41 and n<=60)
    {
        cout<<"Averege";
    }
    else
    {
        cout<<"fail";
    }
}