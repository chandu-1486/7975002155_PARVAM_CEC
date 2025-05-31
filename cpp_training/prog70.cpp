//check the given character is vowel or not
#include<iostream>
using namespace std;
int  main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<ch<<"is a vowel."<<endl;
    }
    else{
        cout<<ch<<"is not a vowel ."<<endl;
    }
    return 0;
}