#include<stdio.h>
int main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is odd");
	}
	return 0;
}
