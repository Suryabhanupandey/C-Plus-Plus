/* Write a program to create a calculator that performs basic arithmetic operator (add,sub,multi and div)using switch case the claculator should input two numbers and on operator from user.
*/

/*Syntax::
switch (integer expression) {
    case constanr 1:
        do this:
    case constanr 2:
        do this:
    case constanr 3:
        do this:
    default:
        do this;
}
*/


#include<iostream>
using namespace std;
int main()
{
 int n1,n2;
 char op;
 cin>>n1;
 cin>>n2;
 cin>>op;
 switch(op)
 {
    case'+':
    cout<<n1+n2<<endl;
    break;
    case'-':
    cout<<n1-n2<<endl;
    break;
    case'*':
    cout<<n1*n2<<endl;
    break;
    case'/':
    cout<<n1/n2<<endl;
    break;
    default:
    cout<<"Invalid operator"<<endl;
      }
}
