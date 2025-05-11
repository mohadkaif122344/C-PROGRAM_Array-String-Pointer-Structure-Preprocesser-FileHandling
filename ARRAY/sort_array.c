//Ques. Write a Program to sort a given list of array. 

// #include <stdio.h>
// int main()
// {
//     int i, j, a, n, number[30];
//     printf("Enter the value of N :");
//     scanf("%d", &n);
//     printf("Enter the numbers :\n");
//     for (i = 0; i < n; ++i)
//         scanf("%d", &number[i]);
//     for (i = 0; i < n; ++i) {
//         for (j = i + 1; j < n; ++j) {
//             if (number[i] > number[j]) 
//             {
//                 a =  number[i];
//                 number[i] = number[j];
//                 number[j] = a;
//             }
//         }
//     }
//     printf("The numbers is sorting order :\n");
//     for (i = 0; i < n; ++i)
//         printf("%d\n", number[i]);
// return 0;
// }




#include<stdio.h>
int main(){

    int arr[5]={11,2,4,8,5};
    int temp;
    int i,j;
    printf("Before Sorting\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
    }
    printf("\nAfter Sorting\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}