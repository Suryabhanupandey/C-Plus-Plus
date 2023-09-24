#include<iostream>
#include<string>
using namespace std;
class binary
{
    private:
    string s;
    public:

    void read(void);
    void chk_bin(void);
    void ones_comliment(void);
    void display(void);
};
void binary :: read(void)
{
cout<<"Enter your binary number"<<endl;
cin>>s;
}
void binary :: chk_bin(void)
{
    for(int i = 0;  i < s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i) !='1')
        {
        cout<<"Incorrect binary format"<<endl;
         
        }
    }
}
void binary :: ones_comliment(void)
{
    for(int i = 0;  i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else 
        {
            s.at(i)='0';
        }
    }
}
void binary ::  display(void)
{
    cout<<"displaying your binary number"<<endl;
    for(int i = 0;  i < s.length(); i++)
    {
        cout<<s.at(i)<<endl;
    }
}

int main()
{
//oops-classes and objects
binary b;
b.read();
b.chk_bin();
b.display();
cout<<endl;
b.ones_comliment();
b.display();
return 0;
}