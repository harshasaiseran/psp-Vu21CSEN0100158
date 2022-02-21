#include<stdio.h>
int fib(int a,int b,int c,int t)
{

 if (a==0)
{
printf("\nTHAT'S IT");
}
else if(a>0)
{
t=b+c;
b=c;
c=t;
printf("%d ",t);
fib(a-1,b,c,t);
}
}
int main()
{
int a,b=0,c=1,t=0;
scanf("%d",&a);
if(a==1)
{
printf("%d ",b);
a=a-1;
}
else if(a==2)
{
printf("%d %d ",b,c);
    a=a-2;
}
else if(a>2)
{
printf("%d %d ",b,c);
    a=a-2;
fib(a,b,c,t);
}
}



