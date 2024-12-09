#include<stdio.h>
int main()
{
   int num,output=1;
   printf("enter a number");
   scanf("%d",&num);
   for(int i=0;i<num;i++)
   {
    output=output*2;

   }
   printf("power of %d is %d",num,output);
   return 0;

   

  }
  