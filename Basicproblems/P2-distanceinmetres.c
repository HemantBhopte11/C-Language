/*Conversion of Distance*/
#include <stdio.h>
int main()
{
    float km, m, cm, ft, inch;
    printf("\nEnter the distance in Kilometres");
    scanf("%f", &km );
    m = km* 1000;
    cm = m * 100;
    inch = cm /2.54 ;
    ft = inch /12;
    printf("Distance in Metres = %f\n",m);
    printf("Distance in Centimetres = %f\n", cm);
    printf("Distance in Inches = %f\n", inch);
    printf("Distance in Feet = %f\n", ft);
    return 0;
}