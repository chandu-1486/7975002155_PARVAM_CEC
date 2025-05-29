#include<iostream>
using namespace std;
int main()
{
    const int rows1=2,cols1=3,rows2=3,cols2=2;
    int mat1[rows1][cols1],mat2[rows2][cols2],product[rows1][cols2]={0};
    cout<<"enter elements for the first matrix("<<rows1<<"x"<<cols1<<"):"<<endl;
    for(int i=0;i<rows1;i++){
         for(int j=0;j<cols1;j++){
            cin>>mat1[i][j];
         }
        }
        cout<<"enter  elements for the second matrix ("<<rows2<<"x"<<cols2<<"):"<<endl;
        for(int i=0;i<rows2;i++){
         for(int j=0;j<cols2;j++){
            cin>>mat2[i][j];
         }

    }
     for(int i=0;i<rows1;i++){
         for(int j=0;j<cols2;j++){
            for(int k=0;k<cols1;k++){
            product[i][j]+=mat1[i][k]+mat2[k][j];
         }
        }
    }
            cout<<"product of two matrices:"<<endl;
              for(int i=0;i<rows1;i++){
         for(int j=0;j<cols2;j++){
            cout<<product[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;
    }





    
