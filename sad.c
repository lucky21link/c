#include<stdio.h>
#include<math.h>	
void fun(int*, int*,double*);
int main()
{
	int sum,avg;
	double stdiv; 
	fun(&sum,&avg,&stdiv);
	printf("sum is=%d\navg=%d\nstandard deviation=%lf\n",sum,avg,stdiv);
	return 0; 
}
void fun(int* sum, int*avg,double*stdiv)
{
	int n1,n2,n3,n4,n5; 
	printf("enter the five number");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	*sum=n1+n2+n3+n4+n5; 
	*avg=*sum/5;
	*stdiv = sqrt((pow((n1-*avg),2)+pow((n2-*avg),2)+pow((n3-*avg),2)+pow((n4-*avg),2)+pow((n5-*avg),2))/4);
}
