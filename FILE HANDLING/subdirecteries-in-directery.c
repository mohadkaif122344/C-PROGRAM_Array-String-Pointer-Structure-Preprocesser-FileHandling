// 1. C Program to list all files and sub-directories in a directory 

// #include <stdio.h>
// #include <stdlib.h>
// #include <dirent.h>

// void listFiles(const char *path) {
//     struct dirent *entry;
//     DIR *dp = opendir(path);

//     if (dp == NULL) {
//         perror("opendir");
//         return;
//     }
//     while ((entry = readdir(dp)) != NULL) {
        
//         if (entry->d_name[0] == '.') {
//             continue;
//         }
//         printf("%s\n", entry->d_name);
//     }
//     closedir(dp);
// }
// int main(int argc, char *argv[]) {
//     const char *path;

//     if (argc < 2) {
//         fprintf(stderr, "Usage: %s <directory_path>\n", argv[0]);
//         return EXIT_FAILURE;
//     }
//     path = argv[1];
//     listFiles(path);

//     return EXIT_SUCCESS;
// }





#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
    struct dirent *de;  // Pointer for directory entry
    DIR *dr;

    // Open current directory
    dr = opendir(".");

    if (dr == NULL) {
        printf("Could not open current directory.\n");
        return 1;
    }

    printf("Listing files and directories:\n");

    // Read and print all entries
    while ((de = readdir(dr)) != NULL) {
        printf("%s\n", de->d_name);
    }

    closedir(dr);
    return 0;
}
