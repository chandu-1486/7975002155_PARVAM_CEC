//exception handling
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    try
    {
        if(age<18)
        throw(age);
        else
         cout<<"Access given";
    }
    catch(int a)
    {
        cout<<"Access denied minimum age be 18,butyour age is:"<<a<<endl;
    }
    return 0;
}