#include<stdio.h>
int main()
{
    int i,n,j;
    n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}