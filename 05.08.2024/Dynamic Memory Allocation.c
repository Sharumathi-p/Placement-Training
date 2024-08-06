#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int n = 5;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
        printf("Element %d: %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}