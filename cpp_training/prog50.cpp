//pointer
#include<iostream>
using namespace std;
int main(){
    int number=30;
    int*p;
    p=&number;
    cout<<"address of no variables:"<<&number<<endl;
    cout<<"address of p variables:"<<p<<endl;
    cout<<"value  of p variables:"<<*p<<endl;
      return 0;
}