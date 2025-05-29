//convert  binary to decimal 
#include<iostream>
using namespace std;
int main()
{
    int decimal=0,binary,power=1,lastdigit;
    cout<<"enter a binary number:";
    cin>>binary;
    while(binary>0){
        lastdigit=binary%10;
        decimal+=lastdigit*power;
        power*=2;
        binary/=10;
    }
    cout<<"decimal number:"<<decimal<<endl;
    return 0;
}  