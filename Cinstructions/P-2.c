/*Reverse digits of a 5-digit number*/
#include <stdio.h>
int main()
{
    int n, d5, d4, d3, d2, d1;
    long int revnum ; /*offers a bigger range of integers*/
    printf( "\nEnter a five digit number (less than 32767);");
    scanf ("%d", &n);
    d5 = n % 10 ; /*5th didit*/
    n = n / 10 ; /*remaining digits*/
    d4 = n % 10 ; /*4th diogit*/
    n = n / 10 ; /*remaining digits*/
    d3 = n % 10 ; /*3rd digits*/
    n = n / 10 ; /*remaining digits*/
    d2 = n % 10 ; /*2nd digits*/
    n = n / 10 ; /*remaining digits*/
    d1 = n % 10 ; /*1st digits*/
    revnum = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1 * 1;
    /*specifier %|d is used for printing a long integer*/
    printf("The reversed number is %d\n", revnum);
    return 0;
}
