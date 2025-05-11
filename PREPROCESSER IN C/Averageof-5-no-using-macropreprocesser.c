//2. C Program to find average of 5 numbers using Macro preprocessor. 
#include <stdio.h>


#define AVERAGE_OF_5(a, b, c, d, e) ((a + b + c + d + e) / 5.0)

int main() {
    float num1, num2, num3, num4, num5, average;

    printf("Enter 5 numbers: ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

   
    average = AVERAGE_OF_5(num1, num2, num3, num4, num5);

    printf("Average of the 5 numbers = %.2f\n", average);

    return 0;
}