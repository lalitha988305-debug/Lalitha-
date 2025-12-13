#include <stdio.h>
int main() {
 char str[200];
 int uppercase = 0, lowercase = 0, vowels = 0, consonants = 0, digits = 0;
 gets(str);
 while (str[i] != '\0') {
 // Check uppercase
 if (str[i] >= 'A' && str[i] <= 'Z') {
 uppercase++;
 if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
 str[i] == 'O' || str[i] == 'U')
 vowels++;
 else
 consonants++;
 }
 // Check lowercase
 else if (str[i] >= 'a' && str[i] <= 'z') {
 lowercase++;
 if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
 str[i] == 'o' || str[i] == 'u')
 vowels++;
 else
 consonants++;
 }
 // Check digits
 else if (str[i] >= '0' &&str[i] <= '9') {
 digits++;
 }
 i++;
 }
 printf("Uppercase = %d\n", uppercaseprintf("Lowercase = %d\n", lowercase);
 printf("Vowels = %d\n", vowels);
 printf("Consonants = %d\n", consonants);
 printf("Digits = %d\n", digits);
 printf("Alphabets = %d\n", uppercase + lowercase);
 return 0;
}

