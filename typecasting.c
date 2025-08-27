#include <stdio.h>

int main() {
    int num1 = 7;
    int num2 = 2;
    float result_implicit;
    float result_explicit;

    // Implicit integer division
    result_implicit = num1 / num2; 
    printf("Implicit division: %f\n", result_implicit); // Output: 3.000000

    // Explicit type casting for floating-point division
    result_explicit = (float)num1 / num2; 
    printf("Explicit division: %f\n", result_explicit); // Output: 3.500000

    return 0;
}