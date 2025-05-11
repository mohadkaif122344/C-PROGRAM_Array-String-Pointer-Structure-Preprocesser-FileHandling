// //Ques. Write a program to reverse an array using pointers. 

#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *start, *end, temp;
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array: ");
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    start = arr; 
    end = arr + (length - 1); 
    
    while(start < end){
        
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;  
        end--;   
    }
    printf("\nReversed Array: ");
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}