//sumation of two number
//tested github
#include<stdio.h>
int main()
{
   int num1,num2,sum;
   float avg;
   printf("enter two numbers:");
   scanf("%d %d",&num1,&num2);

   sum=num1+num2;
   printf("the sum is:%d\n",sum);

   avg=(float)sum/2;//type casting=kono data type er type chng kora
   printf("the avg is:%.1f\n",avg);
   getch();
}
