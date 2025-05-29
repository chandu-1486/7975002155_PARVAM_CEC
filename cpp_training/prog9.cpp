#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int choice;
    float principal ,rate,time,interest;
    int n;
    cout<<"choose 1 for simple interest or 2 for compound interest:";
    cin>>choice;
    cout<<"enter the principal amount:";
    cin>>principal;
    cout<<"enter rate of interest:";
    cin>>rate;
    cout<<"enter time(in years):";
    cin>>time;
    switch(choice){
    case 1:
        interest=(principal*rate*time)/100;
        cout<<"simple interest="<<interest<<endl;
        break;
    case 2:
        cout<<"enter number of times interest applied per time period:";
        cin>>n;
        interest =principal*(pow((1+rate/(n*100)),n*time)-1);
         cout<<"compound interest="<<interest<<endl;
         break;
    default:
         cout<<"invalid choice!"<<endl;
         break;
    }
    return 0;
}