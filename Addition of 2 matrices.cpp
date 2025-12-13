#include <stdio.h>
int main() {
 int r, c;
 scanf("%d %d", &r, &c);
 int A[20][20], B[20][20], C[20][20];
 // Read Matrix A
 for (int i = 0; i < r; i++) {
 for (int j = 0; j < c; j++) {
 scanf("%d", &A[i][j]);
 }
 }
 // Read Matrix B
 for (int i = 0; i < r; i++) {
 for (int j = 0; j < c; j++) {
 scanf("%d", &B[i][j]);
 }
 }
 // Calculate sum
 for (int i = 0; i < r; i++) {
 for (int j = 0; j < c; j++) {
 C[i][j] = A[i][j] + B[i][j];
 }}
 // Print result
 for (int i = 0; i < r; i++) {
 for (int j = 0; j < c; j++) {
 printf("%d ", C[i][j]);
 }
 printf("\n");
 }
 return 0;
}
