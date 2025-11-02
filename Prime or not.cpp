#include<stdio.h>
int main()
{
	int n,a,count=0;
	printf("\n enter n value");
	scanf("%d",&n);
	for(int a=1;a<=n;a++);
	{
		if(n%a==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n prime number");
	}
	else
	{
		printf("\n not a prime number");
	
	 }
	 return 0;
}

