
#include <stdio.h>

int main()
{
    int c,n,f;
 
  printf("Enter a number");
  scanf("%d",&n);
  for (c=1;c<=n;c++)
  {
    f=f*c;
  }
  printf("Factorial of %d = %d\n", n, f);
    return 0;
}


