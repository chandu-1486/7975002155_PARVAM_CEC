//check the length of the string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string :";
    getline(cin,str);
    cout<<"The length of the string is :"<<str.length()<<endl;
    return 0;
}