#include <stdio.h>
#include <string.h>
// Function to find the length of a string without using built-in function
int customStringLength(const char *str)
{
 int length = 0;
 while (str[length] != '\0')
 {
 length++;
 }
 return length;
}
// Function to concatenate two strings without using built-in function
void customStringConcat(char *destination, const char *source)
 {
 int destLength = customStringLength(destination);
 int sourceLength = customStringLength(source);
 for (int i = 0; i < sourceLength; i++)
 {
 destination[destLength + i] = source[i];
 }
 destination[destLength + sourceLength] = '\0';
}
// Function to reverse a string without using built-in function
void customStringReverse(char *str)
 {
 int length = customStringLength(str);
 for (int i = 0; i < length / 2; i++)
 {
 char temp = str[i];
 str[i] = str[length - i - 1];
 str[length - i - 1] = temp;
 }
}
int main()
{
 char str1[100], str2[100], concatenated[200];
 printf("Enter a string: ");
 scanf("%s", str1);
 printf("Enter another string: ");
 scanf("%s", str2);
 // Finding the length of str1
 int length1 = strlen(str1);
 printf("Using built-in function: Length of str1 = %d\n", length1);
 // Concatenating str1 and str2 using built-in function
 strcpy(concatenated, str1);
 strcat(concatenated, str2);
 printf("Using built-in function: Concatenated string = %s\n", concatenated);
 // Reversing str1 using built-in function
 strcpy(concatenated, str1);
 strrev(concatenated); // Note: strrev is not a standard C function, but some
compilers provide it.
 printf("Using built-in function: Reversed str1 = %s\n", concatenated);
 // Finding the length of str1 without using built-in function
 length1 = customStringLength(str1);
 printf("Without built-in function: Length of str1 = %d\n", length1);
 // Concatenating str1 and str2 without using built-in function
 strcpy(concatenated, str1);
 customStringConcat(concatenated, str2);
 printf("Without built-in function: Concatenated string = %s\n",concatenated);
 // Reversing str1 without using built-in function
 strcpy(concatenated, str1);
 customStringReverse(concatenated);
 printf("Without built-in function: Reversed str1 = %s\n", concatenated);
 
