#include <stdio.h>
// Recursive function to find factorial
int factorial(int n) {
 if (n == 0) {
 return 1; // Base case
 }
 return n * factorial(n - 1); // Recursive call
}
int main() {
int n;
 // Read input
 scanf("%d", &n);
 // Calculate factorial
 int result = factorial(n);
 // Output result
 printf("%d", result);
 return 0;
}
