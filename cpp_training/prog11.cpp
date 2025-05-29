//print no in reverse order
#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    cout<<"enter a positive number:";
    cin>>n;
    cout<<"digits in reverse order:";
    while(n>0){
        digit=n%10;
        cout<<digit<<"\n";
        n=n/10;
    }
    cout<<endl;
    return 0;
}