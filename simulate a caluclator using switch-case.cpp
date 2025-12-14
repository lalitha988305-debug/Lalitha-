#include <stdio.h>
int main() {
 double a, b;
 char op;
 scanf("%lf %lf", &a, &b);
 scanf(" %c", &op);
 switch(op) {
 case '+': printf("%.6lf", a + b); break;
 case '-': printf("%.6lf", a - b); break;
 case '*': printf("%.6lf", a * b); break;
 case '/':
 if (b == 0) printf("Division by Zero Error");
 else printf("%.6lf", a / b);
 break;
 default: printf("Invalid Operator");
 }
 return 0;
}
