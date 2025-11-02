#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,area;
    printf("Enter radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("\n the area of circle: %.2f",area);
    

return 0;
}
