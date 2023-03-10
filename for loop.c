#include<stdio.h>
int main( )
{
    int  n,i,sum;
    printf("Enter the maximum value :");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("the sum of the value :%d",sum);
    scanf("%d",&sum);

    return 0;
}
