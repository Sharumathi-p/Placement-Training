#include <stdio.h>
void add(int a, int b);
void subtract(int a, int b);
int main() {
    void (*funcPtr)(int, int);
    funcPtr = add;
    funcPtr(10, 5);
    funcPtr = subtract;
    funcPtr(10, 5); 
    return 0;
}
void add(int a, int b) {
    printf("Addition: %d\n", a + b);
}
void subtract(int a, int b) {
    printf("Subtraction: %d\n", a - b);
}
