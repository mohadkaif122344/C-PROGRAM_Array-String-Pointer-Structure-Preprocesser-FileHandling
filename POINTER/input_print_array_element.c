
// //Ques. C program to input and print array elements using pointers
//  #include <stdio.h>
//  #define MAX_SIZE 100 
//  int main()
//  {
//      int arr[MAX_SIZE];
//      int N, i;
//      int * ptr = arr;    
//      printf("Enter size of array: ");
//      scanf("%d", &N);
//      printf("Enter elements in array:\n");
//      for (i = 0; i < N; i++)
//      {
//          scanf("%d", ptr);
//          ptr++;   
//      }
//      ptr = arr;
//      printf("Array elements: ");
//      for (i = 0; i < N; i++)
//      {
//          printf("%d, ", *ptr);
//          ptr++;
//      }
 
//      return 0;
//  }








#include <stdio.h>
int main() {
    int arr[100], n, i;
    int *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    printf("Enter %d elements: \n", n);
    ptr = arr; 
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i); 
    }
    printf("Array elements are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    return 0;
}
