#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter coefficients of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*b);
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    if (d>0)
    {
        printf("root are real and distinct");
        printf("roots are",r1,r2);
    }
    else if(d=0)
    {
        printf("roots are real and equal");
        printf("roots are",r1,r2);
    }
    else 
    {
        printf("the roots are imaginary");
        printf("roots are",r1,r2);
    }

    return 0;
}



