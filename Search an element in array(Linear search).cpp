#include<stdio.h>
int main()
{
	int arr[100],n,i,found=0,search;
	printf("\n enter array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter value at arr[%d]position",i);
		scanf("%d',&arr[i]");
    }
printf("\n enter searching element");
scanf("%d",& search);
for(i=0;i<n;i++)
{
if(search==arr[i]);
    {
	printf("\n searching element found at location%d",i);
	found=1;
    break;
    }
}
if(found==0)
{
	printf("\n searching element not found at location");
}
return 0;
}
