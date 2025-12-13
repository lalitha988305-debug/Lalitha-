#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	int*arr;
	printf("Enter n value");
	scanf("%d",&n);
	arr=(int*)malloc(n*sum of(int));
	if(arr==NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	for(i=0;i<n;i++)
	{
		printf("Enter digits:");
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum of the digit%d",sum);
	free(arr);
}
return 0;
}
