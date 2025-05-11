// Write a program to concatenate two strings without Library function. 
#include<stdio.h>
int main()
{
  char str1[25],str2[25];
  int i=0,j=0;
  printf("Enter First String:");
  gets(str1);
  printf("Enter Second String:");
  gets(str2);
  while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[i] = str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("Concatenated String is : %s",str1);
}







// #include <stdio.h>
// void string_concat(char dest[], char src[]) {
//     int i = 0, j = 0;
//     while (dest[i] != '\0') {
//         i++;
//     }
//     while (src[j] != '\0') {
//         dest[i] = src[j];
//         i++;
//         j++;
//     }
//     dest[i] = '\0'; 
// }
// int main() {
//     char str1[100], str2[100]; 
//     printf("Enter the first string: ");
//     scanf("%s", str1); 
//     printf("Enter the second string: ");
//     scanf("%s", str2); 
//     string_concat(str1, str2); 
//     printf("Concatenated string: %s\n", str1);
//     return 0;
// }