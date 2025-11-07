#include<stdio.h>
int main()
{ 
  float u,a,d;
  int t;
  printf("Enter the value of acceleration:");
  scanf("%f",&a);
  printf("Enter the value of initial velocity:");
  scanf("%f,&u");
  printf("Enter the value of time");
  scanf("%d",&t);
  d=(u*t)+(a*t*t);
  printf("The distance:%.2f",d);
  
	return 0;
}
