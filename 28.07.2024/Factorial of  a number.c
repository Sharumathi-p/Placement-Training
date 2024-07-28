#include <stdio.h>
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else
        printf("Factorial of %d = %d\n", number, factorial(number));
    return 0;
}
