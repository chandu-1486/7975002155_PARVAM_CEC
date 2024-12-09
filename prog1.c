#include<stdio.h>
int main()
{
    int n,m,div;
    printf("enter the value of m:");
    scanf("%d",&m);
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value od div:");
    scanf("%d",&div);
    for(int i=n;i<=m;i++)
    {
        if(i%div==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}