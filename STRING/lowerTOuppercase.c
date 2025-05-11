// Write a program to convert lowercase string to uppercase. 
#include <stdio.h>
#include <string.h>
int main() {
   char s[100];
   int i;
   printf("\nEnter a string : ");
   gets(s);
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
   printf("\nString in Upper Case = %s", s);
   return 0;
}




// #include <stdio.h>
// void toUpperCase(char str[]) {
//     int i = 0;
//     while (str[i] != '\0') {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - ('a' - 'A');
//         }
//         i++;
//     }
// }
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);
//     toUpperCase(str);
//     printf("Uppercase string: %s\n", str);
//     return 0;
// }





