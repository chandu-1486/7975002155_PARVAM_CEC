//array
#include<stdio.h>
int main()
{
    int i,n,b[20];
    printf("\n enter no of elements");
    scanf("%d",&n);
    printf("\n enter %d integer element",n);
    for(i=0;i<=n;i++)
    scanf("%d",&b[i]);
    printf("\n xxArray element are xx");
    for(i=0;i<=n;i++)
    printf("\n %d",b[i]);
    return 0;
}