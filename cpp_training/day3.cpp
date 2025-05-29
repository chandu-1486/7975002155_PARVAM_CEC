//summation of n numbers
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter the n number :";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+i;
        cout<<"sum:"<<sum<<"\n";
    }
    cout<<"total sum :"<<sum<<"\n";
    return 0;
} 