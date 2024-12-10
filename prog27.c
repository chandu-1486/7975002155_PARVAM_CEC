//to find biggest no in any array using pointers
#include<stdio.h>
int main()
{
int size=0,a[50],i,*biggest=a;
scanf("%d",&size);
for(i=0;i<size;scanf("%d",a+i++));
for(i=1;i<size;i++)
{
    if(*biggest<a[i])
    biggest=&a[i];
}
printf("biggest element is %d",*biggest);
}