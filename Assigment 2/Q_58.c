#include <stdio.h>

int main() {
    int arr1[10], arr2[10], i, temp;
    
    printf("Enter 10 integers for first array:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter 10 integers for second array:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for(i = 0; i < 10; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    
    printf("\nAfter Swapping:\n");
    printf("First array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nSecond array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}