#include<stdio.h>
int main()
{
	 char roll[20],name[20];
	 int s1,s2,s3,total,avg;
	 printf("enter roll and name");
	 scanf("%s%s",&roll,&name);
	 printf("enter s1,s2,s3 marks");
	 scanf("%d%d%d",&s1,&s2,&s3);
	 total=s1+s2+s3;
	 avg=total/3;
	 printf("\n roll:%s",roll);
	 printf("\n name:%s",name);
	 if(s1<40||s2<40||s3<40)
	 {
	 	printf("\n fail");
	 }
	 else if(avg>70)
	 {
	 	printf("\n distinction");
	 }
	 else if(avg>60)
	 { 
	 printf("\n second class");
	 }
	 else
	 {
	 	printf("\n pass"); 	
	 }
	
	return 0;
}




