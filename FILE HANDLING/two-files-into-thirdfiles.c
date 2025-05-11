// 5. C Program to merge contents of two files into a third file

// #include <stdio.h>

// int main() {
//     char file1_name[100], file2_name[100], merged_file_name[100];
//     FILE *file1, *file2, *merged_file;
//     char ch;

//     printf("Enter the first file name: ");
//     scanf("%s", file1_name);
//     printf("Enter the second file name: ");
//     scanf("%s", file2_name);

//     printf("Enter the merged file name: ");
//     scanf("%s", merged_file_name);

//     file1 = fopen(file1_name, "r");
//     if (file1 == NULL) {
//         perror("Unable to open first file");
//         return 1;
//     }
//     file2 = fopen(file2_name, "r");
//     if (file2 == NULL) {
//         perror("Unable to open second file");
//         fclose(file1); 
//         return 1;
//     }
//     merged_file = fopen(merged_file_name, "w");
//     if (merged_file == NULL) {
//         perror("Unable to create merged file");
//         fclose(file1); 
//         fclose(file2); 
//         return 1;
//     }
//     while ((ch = fgetc(file1)) != EOF) {
//         fputc(ch, merged_file);
//     }

//     while ((ch = fgetc(file2)) != EOF) {
//         fputc(ch, merged_file);
//     }
//     fclose(file1);
//     fclose(file2);
//     fclose(merged_file);
//     printf("Files merged successfully into %s.\n", merged_file_name);

//     return 0;
// }






// 5. C Program to merge contents of two files into a third file
#include <stdio.h>
int main() {
    FILE *file1, *file2, *mergedFile;
    char filename1[100], filename2[100], mergedFilename[100];
    char ch;
    printf("Enter the first filename: ");
    scanf("%s", filename1);
    printf("Enter the second filename: ");
    scanf("%s", filename2);
    printf("Enter the merged filename: ");
    scanf("%s", mergedFilename);
   
    file1 = fopen(filename1, "r");
    if (file1 == NULL) {
        printf("Could not open file %s\n", filename1);
        return 1;
    }
    file2 = fopen(filename2, "r");
    if (file2 == NULL) {
        printf("Could not open file %s\n", filename2);
        fclose(file1);
        return 1;
    }
    mergedFile = fopen(mergedFilename, "w");
    if (mergedFile == NULL) {
        printf("Could not open file %s\n", mergedFilename);
        fclose(file1);
        fclose(file2);
        return 1;
    }
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }
    fclose(file1);
    
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }
    fclose(file2);
    printf("Files merged successfully into %s.\n", mergedFilename);
    fclose(mergedFile);
    return 0;
}
