#include<iostream>
using namespace std;
int main()
{
    float m1=56,m2=78,m3=89,m4=90,m5=67,total=0,avg=0;
    cout<<"************student marks card*********";
    cout<<"\n city engineering college";
    cout<<"\n Name:chandana";
    cout<<"\n USN:1CE24IS011";
    cout<<" \n Branch:ISE";
    cout<<"\n Year : 1st year";
    cout<<"\n sem:2nd";
    cout<<"\n college:cec\n";
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    cout<<"\ntotal:"<<total;
    cout<<"\naverage:"<<avg;
    if(avg>90)
    cout<<"\ngrade:A";
    else if(avg>70)
    cout<<"\ngrade:B";
    else
    cout<<"\ngrade:C";
    cout<<"\n**********END OF THE MARKS************";
    return 0;
}