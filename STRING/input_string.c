// 8. Write a program to input a string and print it. 
#include <stdio.h>
int main() {
    char str[100]; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    printf("You entered: %s", str); 
    return 0;
}







// #include <stdio.h>
// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     gets(str);
//     printf("You entered: %s\n", str);
//     return 0;
// }
