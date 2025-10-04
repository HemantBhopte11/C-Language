/*find area of a traingle, given its sides*/
#include <stdio.h>
#include <math.h>  /*for sqrt()*/
int main()
{
    float a, b, c, sp, area;
    printf("\nEnter the sides of the traingle: ");
    scanf("%f %f %f",&a, &b, &c);
    sp = (a + b + c ) / 2; /*semi perimeter*/
    area = sqrt (sp * (sp - a) * (sp - b) * (sp - c)); /*area of traingle*/
    printf("Area of the triangle = %f\n", area);
    return 0;
}