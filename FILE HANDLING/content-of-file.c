// 3. C Program to print contents of file 

// #include <stdio.h>
// int main() {
//     char filename[100];
//     FILE *file;
//     char line[256];

//     printf("Enter the file name: ");
//     scanf("%s", filename);

//     file = fopen(filename, "r");
//     if (file == NULL) {
//         perror("Unable to open file");
//         return 1;
//     }
//     while (fgets(line, sizeof(line), file) != NULL) {
//         printf("%s", line);
//     }

//     fclose(file);

//     return 0;
// }








#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

  
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    
    printf("Contents of the file %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    
    return 0;
}
