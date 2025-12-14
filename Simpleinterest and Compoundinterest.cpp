#include <stdio.h>
#include <math.h>
int main() {
 float P, R, T;
 float SI, CI;
 scanf("%f", &P);
 scanf("%f", &R);
 scanf("%f", &T);
 // Simple Interest
 SI = (P * R * T) / 100;
 // Compound Interest
 CI = P * pow((1 + R / 100), T) - P;
 printf("Simple Interest: %.2f\n", SI);
 printf("Compound Interest: %.2f", CI);
 return 0;
}
