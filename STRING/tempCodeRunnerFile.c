#include <stdio.h>
#include <stdbool.h>
int countWords(const char *str) {
    int count = 0;
    bool inWord = false; 
    while (*str != '\0') {
        if (*str == ' ') {
            inWord = false; 
        } else {
            if (!inWord) {
                count++; 
                inWord = true; 
            }
        }
        str++; 
    }
    return count;
}
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    int wordCount = countWords(str);
    printf("Total number of words: %d\n", wordCount);
    return 0;
}


