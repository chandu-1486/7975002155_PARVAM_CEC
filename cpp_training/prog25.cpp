//pattern(a,b,c)
#include<iostream>
using namespace std;
int main(){
  int n;
    cout<<"enter the no of rows for the right angle triangle:";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}