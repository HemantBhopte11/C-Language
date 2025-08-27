#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Make sure it's a 5-digit number
    if (num < 10000 || num > 99999) {
        printf("Error: Please enter a five-digit number.\n");
        return 1;
    }

    // Extract and sum digits
    sum += num % 10; num /= 10;
    sum += num % 10; num /= 10;
    sum += num % 10; num /= 10;
    sum += num % 10; num /= 10;
    sum += num % 10;

    printf("Sum of digits = %d\n", sum);

    return 0;
}
