#include <stdio.h>

int main() 
{
    int i, n, j, k;
    n = 5;
    
    for(i = 1; i <= n; i++) 
    {

        for(k = 1; k <= n - i; k++) 
        {
            printf(" ");
        }
        
        for(j = 1; j <= (2 * i - 1); j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}