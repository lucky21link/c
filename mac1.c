#include<stdio.h>
#define SQUARE(n) n*n
#define SQUARE1(n) (n*n)
int main()
{
	int j ; 
	j =64/SQUARE(4); 
	printf("j  value is->%d\n",j);
	j=64/SQUARE1(4); 
	printf("j value is->%d\n",j); 
return 0; 
}
