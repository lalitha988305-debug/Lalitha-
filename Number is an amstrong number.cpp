#include <stdio.h>
#include <math.h>
int main() {
 int n, temp, digits = 0;
 scanf("%d", &n);
 temp = n;
 // Count digits
 while (temp != 0) {
 digits++;
 temp /= 10;
 }
 temp = n;
 int sum = 0;
 // Calculate sum of digits raised to number of digits
 while (temp!= 0) {
 	int digit = temp % 10;
 sum += pow(digit, digits);
 temp /= 10;
 }
 if (sum == n)
 printf("Armstrong");
 else
 printf("Not Armstrong");
 return 0;
}
