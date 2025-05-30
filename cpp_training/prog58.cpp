#include<iostream>
using namespace std;
int main()
{
    int num,den;
    cout<<"enter the 2 no:";
    cin>>num>>den;
    try
    {
            if(den==0)
               throw(den);
            else
             cout<<num/den;
    }
    catch(int d)
    {
        cout<<"division by zero error:cannot divided by:"<<d;
    }
    return 0;
}