#include<stdio.h>
int main()
{
    int arr[5];
    for(int i = 0; i <=4; i++)
    {
        printf("Enter element of the array :");
        scanf("%d",&arr[i]);
    }

    for(int i = 4; i>=0; i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}



// #include<stdio.h>
// int main(){
//     int a[9]={1, 2, 3, 4, 5};
//     int i;
//     printf("Original array:");
//     for(i=0; i<5; i++)
//     {
//         printf("%d",a[i]);
//     }
//     printf("\n");
//     printf("Reversed array:");
//     for(i=4; i>=0; i--)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }







// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 4; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }