 
// // 5. Write a program to copy one array to another using pointer. 

// #include <stdio.h>
// #include<string.h>
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int destination[size];
//     for (int i = 0; i < size; i++) {
//         destination[i] = arr[i];
//     }

//     printf("Copied Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", destination[i]);
//     }
//     return 0;
// }



#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n, i;
    int *ptr1, *ptr2;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    ptr1 = arr1; 
    for (i = 0; i < n; i++) {
        scanf("%d", ptr1 + i); 
    }
    ptr2 = arr2; 
    for (i = 0; i < n; i++) {
        *(ptr2 + i) = *(ptr1 + i); 
    }
    printf("Copied array elements are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr2 + i)); 
    }
    return 0;
}





