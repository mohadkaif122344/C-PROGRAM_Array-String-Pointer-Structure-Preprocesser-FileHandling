/*
Ques 4.  Write a program to add two distances in feet and inches using structure
*/
#include <stdio.h>
struct Distance {
    int feet;
    float inches;
};
int main() {
   
    struct Distance d1, d2, result;

    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);
   
    printf("Enter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);
    
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
   
    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }
   
    printf("Sum of distances: %d feet", result.feet);
    printf("\nSum of distances: %.2f inches\n", result.inches);
    return 0;
}