// // C program to add two number using pointers.

#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = *ptr1 + *ptr2;
    printf("Sum = %d\n", sum);

    return 0;
}










//  #include <stdio.h>
//  int main()
//  {
//      float num1, num2;    
//      float *ptr1, *ptr2;  
//      float sum, diff, mult, div;
//      ptr1 = &num1; 
//      ptr2 = &num2; 
//      printf("Enter any two real numbers: ");
//      scanf("%f%f", ptr1, ptr2);
//      sum  = (*ptr1) + (*ptr2);
//      diff = (*ptr1) - (*ptr2);
//      mult = (*ptr1) * (*ptr2);
//      div  = (*ptr1) / (*ptr2);

//      printf("Sum = %.2f\n", sum);
//      printf("Difference = %.2f\n", diff);
//      printf("Product = %.2f\n", mult);
//      printf("Quotient = %.2f\n", div);
//      return 0;
//  }