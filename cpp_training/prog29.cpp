//pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no  for the pyramid of star:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(1*i);j++){
            cout<<"*" ;}
            cout<<endl;
    }
    return 0;
}