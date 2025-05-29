#include<iostream>
using namespace std;
int main()
{
    int n,digit,rev;
    cout<<"enter a positive number:";
    cin>>n;
    while(n>0){
        digit=n%10;
        cout<<digit<<"\n";
        n=n/10;
        rev=rev*10+digit;
        cout<<"reverse of the number"<<rev;
    }
    cout<<endl;
    return 0;
}