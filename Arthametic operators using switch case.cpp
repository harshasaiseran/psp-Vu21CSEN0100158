#include <stdio.h>
int main()
{
   int a,b,c,d,e,ch;
   float f,g;
   printf("enter the value of a");
   scanf("%d",&a);
   printf("enter the value of b");
   scanf("%d",&b);
   printf("enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:
       c=a+b;
       printf("\n%d",c);
       break;
       case 2:
       d=a-b;
       printf("\n%d",d);
       break;
       case 3:
       e=a*b;
       printf("\n%d",e);
       break;
       case 4:
       f=a/b;
       printf("\n%f",f);
       break;
       case 5:
       g=a%b;
       printf("\n%f",g);
       break;
       default:
       printf("enter the correct choice");
   }

    return 0;
}


