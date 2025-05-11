// Write a program to find length of string without Library function. 
#include <stdio.h>
int main() {
  char str[100];
  int length = 0;
  int i;

  printf("Enter a string: ");
  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++) {
    length++;
  }
  printf("Length of the string: %d\n", length);
  return 0;
}





// #include <stdio.h>
// int main() {
//     char s[] = "Programming is fun";
//     int i;

//     for (i = 0; s[i] != '\0'; ++i);
    
//     printf("Length of the string: %d", i);
//     return 0;
// }
