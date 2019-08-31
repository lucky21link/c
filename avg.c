/* write a function that receives marks received by a student in 3 subject and return the average and pecentage of these mark.Call this function from main() and print the result in main()*/
#include<stdio.h>
void result(int,int,int,int,int,float*,float*); 
int main()
{
	float average,percentage ; 
	int tamil ,english, maths,science, social_science ; 
	printf("Enter the marks");
	scanf("%d%d%d%d%d",&tamil,&english,&maths,&science,&social_science);
	result(tamil,english,maths,science,social_science,&average,&percentage);
	printf("the average is%d\n percentage is%d\n",average,percentage);
	return 0; 
}
void result(int tamil, int english,int maths,int science,int social_science,float*average,float*percentage)
{
*percentage=*average=(tamil+english+maths+science+social_science)/5.0f; 
}
