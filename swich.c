 #include<stdio.h>
int main()
{
    int age  ;
        printf("enter age:");
    scanf("%d",&age);

    switch(age){
       case 10 :
           printf("child");
           break;
         case 20 :
           printf("teenager");
           break;

            case 30 :
           printf("young");
           break;

            case 40 :
           printf("old");
           break;

            case 50 :
           printf("bura");
           break;

            case 60 :
           printf("onk bura");
           break;

    }

    return 0;
}
