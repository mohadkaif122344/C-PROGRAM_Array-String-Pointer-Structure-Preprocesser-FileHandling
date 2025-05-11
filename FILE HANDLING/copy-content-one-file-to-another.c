//4. C Program to copy contents of one file to another file 

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;

    
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename: ");
    scanf("%s", destinationFilename);

   
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open file %s\n", sourceFilename);
        return 1;
    }

   
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Could not open file %s\n", destinationFilename);
        fclose(sourceFile);
        return 1;
    }

   
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");
    
    fclose(sourceFile);
    fclose(destinationFile);
    
    return 0;
}
