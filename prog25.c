//pointer
#include<stdio.h>
int main()
{
    int n=0,*p=&n;
    scanf("%d",&n);
    *p=100;
    printf("var n value %d",n);
    return 0;
}