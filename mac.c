#include<stdio.h>
#define AREA(x) (3.14*x*x)
int main()
{
	float a, r1=9.89,r2=76.3; 
	a=AREA(r1); 
	printf("Area of circle=%f\n",a); 
	a=AREA(r2); 
	printf("Area of circle=%f\n",a); 
	return 0; 
}
