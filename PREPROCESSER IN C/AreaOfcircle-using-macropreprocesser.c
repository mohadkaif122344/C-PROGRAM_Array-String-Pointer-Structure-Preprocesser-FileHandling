// Ques 3. C Program to find area of circle using Macro preprocessor. 
#include <stdio.h>


#define AREA_OF_CIRCLE(radius) (3.14159 * (radius) * (radius))

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    
    scanf("%f", &radius);

    area = AREA_OF_CIRCLE(radius);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}