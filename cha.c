#include<stdio.h>
int main()
{
    int a=6,b=20;
    
    printf("Before swap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap a=%d b=%d",a,b);
    return 0;
}