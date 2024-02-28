#include <stdio.h>

int main() {
    int arr[5] = {2, 3, 5, 7}; 

    printf("Original array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int insertedNumber = 4; 
    int insertIndex = 2;   

    
    for (int i = 4; i > insertIndex; i--) {
        arr[i] = arr[i - 1];
    }
    arr[insertIndex] = insertedNumber;

    printf("Array after insertion: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = insertIndex; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}