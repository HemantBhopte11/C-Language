#include <stdio.h>
#include <math.h>   // For sqrt, atan2, M_PI

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double x, y, r, psi;

    printf("Enter Cartesian coordinates (x y): ");
    scanf("%lf %lf", &x, &y);

    // Calculate polar coordinates
    r = sqrt(x * x + y * y);        // Distance from origin
    psi = atan2(y, x);              // Angle in radians

    // Convert angle to degrees
    double psi_degrees = psi * (180.0 / M_PI);

    printf("Polar coordinates:\n");
    printf("r = %.2f\n", r);
    printf("psi (radians) = %.2f\n", psi);
    printf("psi (degrees) = %.2f\n", psi_degrees);

    return 0;
}
