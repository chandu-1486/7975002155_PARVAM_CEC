//array of addition of 2d
#include<iostream>
using namespace std;
int main()
{
    const int rows=2,cols=3;
    int arr1[rows][cols],arr2[rows][cols],sum[rows][cols];
    cout<<"enter array for the first 2D array("<<rows<<"x"<<cols<<"):"<<endl;
    for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
            cin>>arr1[i][j];
         }
        }
        cout<<"enter array for the second 2D array("<<rows<<"x"<<cols<<"):"<<endl;
        for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
            cin>>arr2[i][j];
         }

    }
     for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
         }
        }
            cout<<"sum of two 2D arrays:"<<endl;
              for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
            cout<<sum[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;
    }





    
