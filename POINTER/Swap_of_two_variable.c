// Ques.  Write a program to swap value of two variables using pointer. 

#include <stdio.h>
int main() {
    int a, b, temp;
    int *ptr1, *ptr2;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a,&b);
    printf("\nBefore swapping a = %d and b = %d", a, b);
    ptr1 = &a;
    ptr2 = &b;
   
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("\nAfter swapping a = %d and b = %d", a, b);
    return 0;
}



// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x = 5, y = 10;
//     printf("Before swapping:\n");
//     printf("x = %d, y = %d\n", x, y);

//     swap(&x, &y);
//     printf("After swapping:\n");
//     printf("x = %d, y = %d\n", x, y);
//     return 0;
// }




