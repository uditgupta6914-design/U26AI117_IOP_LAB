#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number which factor you want:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i == 0)
        {
            printf("%d",i);
            if (i < n) printf(", ");
        }
   
     }
}