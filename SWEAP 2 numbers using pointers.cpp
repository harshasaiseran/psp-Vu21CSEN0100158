#include <stdio.h>
int main()
{
    int a,b,*p1,*p2,c;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("before swapping\na=%d\nb=%d\n",a,b);
    p1=&a;
    p2=&b;
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf("after swapping\na=%d\nb=%d\n",a,b);
    
    return 0;
}


