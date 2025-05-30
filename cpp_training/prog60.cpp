//sort the array {13,7,6,4,3,15,18,20}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={13,7,6,4,3,15,18,20};
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}