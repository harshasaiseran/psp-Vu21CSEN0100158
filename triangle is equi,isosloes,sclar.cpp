#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {
        printf("given triangle is equilateral");
    }
        else if(a==b|| b==c|| c==a)
        {
            printf("given triangle is isoceles");
        }
          else
          {
              printf("given triangle is scalene");
          }
    return 0;
}


