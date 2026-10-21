#include <stdio.h>

int main() {
    int arr1[10], arr2[10], arr3[10], i;
    
    printf("Enter 10 integers for first array:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter 10 integers for second array:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("\nAddition of arrays (arr3):\n");
    for(i = 0; i < 10; i++) {
        arr3[i] = arr1[i] + arr2[i];
        printf("%d ", arr3[i]);
    }
    printf("\n");
    
    return 0;
}