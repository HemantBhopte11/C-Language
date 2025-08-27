/*Temperature of a city in Fahrenheit Degrees*/
#include <stdio.h>
int main()
{
    float fahrenheit, celcius;
    printf("Enter temperature in Fahrenheit;");
    scanf("%f", &fahrenheit);
    celcius = (5.0 / 9.0) * (fahrenheit - 32);
    printf("Temperature in Celcius= %2.f\n",celcius) ;
    return 0 ;
}