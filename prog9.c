//1 ,-4 ,9 ,-16 ,25.....n
#include<stdio.h>
int main()
{
    int i=1,x=100;
    while(i<=100)
    {
        if(i%2==0)
        printf("%d\n",-i*i);
        else
        printf("%d\n",i*i);
        i=i+1;
    }
    return 0;
}