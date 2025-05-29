//pattern
#include<iostream>
using namespace std;
int main(){
    char letters[]={'a','b','c','d'};
    int rows=4;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<letters[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}