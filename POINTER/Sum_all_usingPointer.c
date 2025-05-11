// Ques. C program to calculate the sum of all array elements using pointers

#include <stdio.h>
int main() {
    int arr[100], size;
    int *ptr, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for (int i = 0; i < size; i++) {
        sum = sum + *ptr;
        ptr++; 
    }
    printf("The sum of array elements is: %d", sum);
    return 0;
}






// #include <stdio.h>
// int main() {
//     int arr[] = {10, 20, 30, 40, 50}; 
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;
//     int *ptr = arr; 
//     for (int i = 0; i < n; i++) {
//         sum += *ptr; 
//         ptr++;       
//     }
//     printf("Sum of all elements in the array: %d\n", sum);
//     return 0;
// }





