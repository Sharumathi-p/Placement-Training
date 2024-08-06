#include <stdio.h>
typedef struct {
    char type;  
    union {
        int i;
        float f;
        char c;
    } data;
} Data;

int main() {
    Data data;
    data.type = 'i';
    data.data.i = 42;
    printf("Integer: %d\n", data.data.i);
    data.type = 'f';
    data.data.f = 3.14;
    printf("Float: %.2f\n", data.data.f);
    data.type = 'c';
    data.data.c = 'A';
    printf("Char: %c\n", data.data.c);
    return 0;
}
