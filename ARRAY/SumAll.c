// #include<stdio.h>
// int main()
// {
//     int arr[5]= {1,2,3,4,5};
//     int sum=0;
//     for (int i = 0; i < 5; i++)
//     {
//         sum=sum+arr[i];
//     }
//     printf("Sum of all elements : %d\n",sum);
//     return 0;
// }





#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}








