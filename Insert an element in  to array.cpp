#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50},i,index_value,new_value;
	printf("\n original array");
	for(i=0;i<=5;i++)
	{
		printf("\t %d",arr[i]);
		
	}
	printf("\n enter index_value from(0 to 4)");
	scanf("%d",& index_value);
    printf("/n enter new_value ");
	scanf("%d",& new_value);
	arr[index_value]=new_value;
	printf("\n After modificaton");
	for(i=0;i<=5;i++)
	{
		printf("/t %d",arr[i]);
	}
	return 0;
}
