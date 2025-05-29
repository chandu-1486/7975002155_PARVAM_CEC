#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double principal,rate,time;
    int compounding_periods;
    cout<<"Enter principal amount:";
    cin>>principal;
    cout<<"enter annual interest rate(as a decimal):";
    cin>>rate;
    cout<<"enter time in years:";
    cin>>time;
    cout<<"enter number of com,pounding periods per year:";
    cin>>compounding_periods;
    double amount =principal*pow((1+rate/compounding_periods),compounding_periods*time);
    double compound_interest=amount-principal;
    cout<<"compound interest="<<compound_interest<<endl;
    return 0;
}
