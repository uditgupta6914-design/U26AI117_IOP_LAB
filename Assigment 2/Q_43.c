#include <stdio.h>

int main() {
    float sales, commission;
    
    printf("Enter the total sales amount (Rs): ");
    scanf("%f", &sales);
    
    if (sales <= 500) {
        commission = sales * 0.05;
    } else if (sales > 500 && sales <= 2000) {
        commission = 35.0 + ((sales - 500) * 0.10);
    } else if (sales > 2000 && sales <= 5000) {
        commission = 185.0 + ((sales - 2000) * 0.12);
    } else {
        commission = sales * 0.125;
    }
    
    printf("The calculated commission is: Rs. %.2f\n", commission);
    
    return 0;
}