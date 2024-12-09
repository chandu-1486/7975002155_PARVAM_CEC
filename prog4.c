#include<stdio.h>
int main()
{
    int n=5,m=0;
    m=10;
    do
    {
        printf("%d x %d =%d\n",n,m,n*m);
        m--;
    } 
    while(m>=1);
    return 0;
    
}