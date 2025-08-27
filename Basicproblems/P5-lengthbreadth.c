#include <stdio.h>

#define PI 3.1416

int main() {
    float length, breadth, radius;
    float rect_area, rect_perimeter;
    float circle_area, circle_circumference;

    // Input for rectangle
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Input for circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Rectangle calculations
    rect_area = length * breadth;
    rect_perimeter = 2 * (length + breadth);

    // Circle calculations
    circle_area = PI * radius * radius;
    circle_circumference = 2 * PI * radius;

    // Output results
    printf("\n--- Rectangle ---\n");
    printf("Area: %.2f\n", rect_area);
    printf("Perimeter: %.2f\n", rect_perimeter);

    printf("\n--- Circle ---\n");
    printf("Area: %.2f\n", circle_area);
    printf("Circumference: %.2f\n", circle_circumference);

    return 0;
}