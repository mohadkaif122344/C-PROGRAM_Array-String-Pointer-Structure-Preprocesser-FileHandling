// #include <stdio.h>
// int main() {
//   int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//   int row, col;

//   printf("Enter row and column to access element:\n");
//   scanf("%d %d", &row, &col);

//   if (row >= 0 && row < 3 && col >= 0 && col < 3) {
//     printf("Element at matrix[%d][%d] is: %d\n", row, col, matrix[row][col]);
//   } else {
//     printf("Invalid row or column index.\n");
//   }
//   return 0;
// }




//Write a program to access an elementin 2-D array
#include <stdio.h>
int main()
{
   int i, j, arr[3][3];
    printf("Enter the element for each row and column:\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("arr[%d][%d] = ", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   
   printf("Element present in an Array:\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }
   return (0);
}

