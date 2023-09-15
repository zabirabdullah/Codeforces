#include <stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=n; i>0; i--)
    {
        j = 1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }

    return 0;
}
