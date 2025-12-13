#include <stdio.h>
int main() {
 int r1, c1, r2, c2;
 scanf("%d %d", &r1, &c1);
 int A[10][10], B[10][10], C[10][10];
 // Input Matrix A
 for (int i = 0; i < r1; i++) {
 for (int j = 0; j < c1; j++) {
 scanf("%d", &A[i][j]);
 }
 }
 // Input Matrix B
 scanf("%d %d", &r2, &c2);
 for (int i = 0; i < r2; i++) {
 for (int j = 0; j < c2; j++) {
 scanf("%d", &B[i][j]);
 }
 }
 // Check if multiplication possible
 f (c1 != r2) {
 printf("Invalid Input");
 return 0;
 }
 // Matrix multiplication
 for (int i = 0; i < r1; i++) {
 for (int j = 0; j < c2; j++) {
 	C[i][j] = 0;
 for (int k = 0; k < c1; k++) {
 C[i][j] += A[i][k] * B[k][j];
 }
 }
 }
 // Print result matrix
 for (int i = 0; i < r1; i++) {
 for (int j = 0; j < c2; j++) {
 printf("%d ", C[i][j]);
 }
 printf("\n");
 }
 return 0;
}
