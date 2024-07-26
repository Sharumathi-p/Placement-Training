#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    printf("First 10 Fibonacci numbers: ");
    fibonacci(10);
    return 0;
}
