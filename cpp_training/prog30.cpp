//pattern(rectangle)
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"enter the no of rows";
    cin>>rows;
    cout<<"enter the no of cols";
    cin>>cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
return 0;
}