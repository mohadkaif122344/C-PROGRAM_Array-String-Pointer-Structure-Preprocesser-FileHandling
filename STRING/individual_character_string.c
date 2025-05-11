// 9. Write a program to print individual characters of string in reverse order. 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int length;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
    return 0;
}





