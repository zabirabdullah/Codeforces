#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[110][110], n, i, j, sum1, sum2;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0, sum1=0; i<n; i++)
    {
        sum1 += a[i][i];
    }
    for(i=(n-1), j=0, sum2=0; i>=0; i--, j++)
    {
        sum2 += a[i][j];
    }
    
    int sum = abs(sum1 - sum2);
    printf("%d\n", sum);

    return 0;
}
