#include<stdio.h>
int main()
{
	int mat,phy,chem,eng,tel,total;
	float average;
	printf("Enter marks of 5 subjects:");
	scanf("%d %d %d %d %d",&mat,&phy,&chem,&eng,&tel);
	total=mat+phy+chem+eng+tel;
	average=(mat+phy+chem+eng+tel);
	printf("The total marks of 5 subjects is:%d\n",total);
	printf("the average of 5 subjects is:%.2f\n",average);
	return 0;
}
