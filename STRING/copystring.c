/*Ques.Write a program to copy a string to another string using standard library function. Use dynamic 
memory allocation to accept string. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *source, *destination;
    int length;

    source = (char *)malloc(100 * sizeof(char));
    if (source == NULL) {
        printf("Memory allocation failed for source string.\n");
        return 1;
    }
    printf("Enter a string: ");
    fgets(source, 100, stdin);
    source[strcspn(source, "\n")] = '\0';
    length = strlen(source);
    destination = (char *)malloc((length + 1) * sizeof(char));
    if (destination == NULL) {
        printf("Memory allocation failed for destination string.\n");
        free(source);
        return 1;
    }
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    free(source);
    free(destination);

    return 0;
}
