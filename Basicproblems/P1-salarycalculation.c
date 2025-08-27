/*Calculate Ramesh's gross salary*/
#include <stdio.h>
int main()
{
    float bp,da,hra,gs;
    printf("\nEnter Basic Salary of Ramesh:");
   scanf("%f", &bp);
    da = 0.4*bp;
    hra = 0.2*bp;
    gs = bp + da + hra ;
    printf("Basic Salary of Ramesh=%f\n", bp);
    printf("Dearness Allowances=%f\n", da);
    printf("House Rent Allowances=%f\n", hra);
    printf("Gross Pay of Ramesh is %f\n", gs);
    return 0;
}