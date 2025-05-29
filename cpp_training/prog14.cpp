//swapping of temporary variables
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter two numbers:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping:"<<endl;
    cout<<"First number :"<<a <<endl;
    cout<<"Second number :"<<b <<endl;
    return 0;

}