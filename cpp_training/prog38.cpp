//calculate the total and avg of array
#include<iostream>
using namespace std;
int main(){
    int arr[]={ 5,10,15,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];}
    float average=(float)sum/n;
    cout<<"total(sum):"<<sum<<endl;
    cout<<"average:"<<average<<endl;
    return 0;

}