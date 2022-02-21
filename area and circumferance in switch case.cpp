#include <stdio.h>
int main()
{
    int ch;
    float area,pi,circumferance,radius;
    printf("enter the choice");
    scanf("%d",&ch);
    pi=3.142;
    printf("enter the radius");
    scanf("%f",&radius);
    switch(ch)
    {
        case 1:
        area=pi*radius*radius;
        printf("area=%f",area);
        break;
        case 2:
        circumferance=2*pi*radius;
        printf("circumferance=%f",circumferance);
        break;
    }
    return 0;
}


