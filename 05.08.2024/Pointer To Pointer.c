#include <stdio.h>
int main() {
    int value = 42;
    int *ptr = &value;
    int **ptrToPtr = &ptr;
    printf("Value: %d\n", value);
    printf("Pointer points to value: %d\n", *ptr);
    printf("Pointer to pointer points to value: %d\n", **ptrToPtr);
    return 0;
}
