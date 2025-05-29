//convert decimal to binary
#include<iostream>
using namespace std;
int main()
{
    int decimal,binary=0,base=1,remainder;
    cout<<"enter a decimal number:";
    cin>>decimal;
    while(decimal>0){
        remainder=decimal%2;
        binary=binary+remainder*base;
        decimal=decimal/2;
        base=base*10;
    }
    cout<<"binary equivalent :"<<binary<<endl;
    return 0;
}  