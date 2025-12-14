#include <stdio.h>
#include <string.h>
void toUpperCase(char *str)
{
 for (int i = 0; str[i]; i++)
 {
 if (str[i] >= 'a' && str[i] <= 'z')
 {
 str[i] = str[i] - 32; // Convert to uppercase
 }
 }
}
void toLowerCase(char *str)
{
 for (int i = 0; str[i]; i++)
 {
 if (str[i] >= 'A' && str[i] <= 'Z')
 {
 str[i] = str[i] + 32; // Convert to lowercase
 }
 }
}
void toggleCase(char *str)
{
 for (int i = 0; str[i]; i++)
 {
 if (str[i] >= 'a' && str[i] <= 'z')
 {
 str[i] = str[i] - 32; // Convert to uppercase
 } else if (str[i] >= 'A' && str[i] <= 'Z')
 {
 str[i] = str[i] + 32; // Convert to lowercase
 }
 }
}
void sententialCase(char *str)
{
 int capitalize = 1; // Start with a capital letter
 for (int i = 0; str[i]; i++)
 {
 if (str[i] >= 'a' && str[i] <= 'z' && capitalize)
 {
 str[i] = str[i] - 32; // Convert to uppercase
 capitalize = 0;
 } else if (str[i] >= 'A' && str[i] <= 'Z' && !capitalize)
 {
 str[i] = str[i] + 32; // Convert to lowercase
 capitalize = 1;
 }
 }
}
int main()
{
 char input[100];
 printf("Enter a string: ");
 fgets(input, sizeof(input), stdin);
 input[strcspn(input, "\n")] = '\0'; // Remove the newline character from
input
 char output[100];
 strcpy(output, input); // Copy the input to output for each case conversion
 toUpperCase(output);
 printf("Uppercase: %s\n", output);
 strcpy(output, input);
 toLowerCase(output);
 printf("Lowercase: %s\n", output);
 strcpy(output, input);
 toggleCase(output);
 printf("Toggle Case: %s\n", output);
 strcpy(output, input);
 sententialCase(output);
 printf("Sentential Case: %s\n", output);
 return 0;
}
