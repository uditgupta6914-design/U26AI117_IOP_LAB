#include <stdio.h>

int main() {
    int units;
    float amount;
    
    printf("Enter the electricity consumption in units: ");
    scanf("%d", &units);
    
    if (units <= 200) {
        amount = units * 0.50;
    } else if (units <= 400) {
        amount = 100.0 + ((units - 200) * 0.65);
    } else if (units <= 600) {
        amount = 230.0 + ((units - 400) * 0.80);
    } else {
        amount = 425.0 + ((units - 600) * 1.25);
    }
    
    printf("The total amount to be paid is: Rs. %.2f\n", amount);
    
    return 0;
}