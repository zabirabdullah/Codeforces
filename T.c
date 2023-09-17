#include <stdio.h>

int main(){
    int n, i, j, k;
    scanf("%d", &n);

    for(i=n; i>0; i--)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        for(j=i; j<n; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
