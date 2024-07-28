#include <stdio.h>
#include <stdlib.h>
int main() {
    int *array;
    int size, newSize;
    printf("Enter initial size of the array: ");
    scanf("%d", &size);
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    printf("Enter new size of the array: ");
    scanf("%d", &newSize);
    array = (int *)realloc(array, newSize * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    if (newSize > size) {
        for (int i = size; i < newSize; i++)
            array[i] = 0; // or any default value
    }
    printf("Array elements:\n");
    for (int i = 0; i < newSize; i++)
        printf("%d ", array[i]);
    printf("\n");
    free(array);
    return 0;
}
