//expection handling
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={10,20,30};
    try
    {
       cout<<a.at(5);
    }
    catch(out_of_range e)
    {
       cout<<"caught:"<<e.what();
    }
    return 0;
}