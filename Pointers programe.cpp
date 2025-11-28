#include<stdio.h>
int main()
{
	int a=10,*ptr;
	float b=3.2,*ptr2;
	ptr=&a;
	ptr2=&b;
	printf("\n The value of a%d",a);
	printf("\n address of a%x",&a);
	printf("\n value of b%d",b);
	printf("\n address of b%x",&b);
	printf("\n The value of ptr %x",ptr);
	printf("\n The address of ptr %x,&ptr");
	printf("\n Yhe ptr pointing value %d",*ptr);
	printf("\n The ptr2 value %x",ptr2);
	printf("\n The address of ptr2 %x",&ptr2);
	printf("\n The ptr2 pointing value %f",*ptr2);
	return 0;
	
	
}
