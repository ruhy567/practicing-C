//write a program that calculate the area of a triangle

#include<stdio.h>
int main()
{
   float base,height,area;
   printf("enter base=");
   scanf("%f",&base);

    printf("enter height=");
    scanf("%f",&height);

   area=(float)1/2*base*height;
   printf("the area of a triangle is=%.2f\n",area);
   return 0;
}
