//1,4,9,16,25....n
#include<stdio.h>
int main()
{
    int num=1,inc=3,n=100;
    while(num<=100)
    {
        printf("%d\n",num);
        num=num+inc;
        inc=inc+2;
    }
    return 0;
}