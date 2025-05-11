//1. C Program to find Simple Interest using Macro preprocessor. 
#include <stdio.h>
// Macro to calculate simple interest
#define SIMPLE_INTEREST(P, R, T) ((P * R * T) / 100.0)

int main() {
    float principal, rate, time, interest;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    interest = SIMPLE_INTEREST(principal, rate, time);

    printf("Simple Interest: %.2f\n", interest);
    
    return 0;
}
