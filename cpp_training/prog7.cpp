//simple interest
#include<iostream>
using namespace std;
int main()
{
    float principal,rate,time,simpleinterest;
    cout<<"Enter principal amount:";
    cin>>principal;
    cout<<"enter rate of interest:";
    cin>>rate;
    cout<<"enter time:";
    cin>>time;
    simpleinterest=(principal*rate*time)/100;
    cout<<"simpleinterest="<<simpleinterest<<endl;
    return 0;
}