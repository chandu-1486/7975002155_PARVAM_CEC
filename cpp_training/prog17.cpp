//swapping of no using hexon(^)
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"after swapping:"<<endl;
    cout<<"First number :"<<a <<endl;
    cout<<"Second number :"<<b <<endl;
    return 0;

}