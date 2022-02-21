
#include <stdio.h>

int main()
{
    
	float PI=3.14; 
	float a,c,r;
	char  s;
	printf("a for area and c for circumference");
    printf("\nenter your choice");
    scanf("%c",&s);
	printf("enter the radius");
	scanf("%f",&r);
	
	switch(s)
	{
		case 'a':
			a=PI*r*r;
			printf("%f",a);
			break;
		case 'c':
		    c=2*PI*r;
		    printf("%f",c);
			break;
		default:
		    printf("enter the correct choice");
}
    return 0;
}






