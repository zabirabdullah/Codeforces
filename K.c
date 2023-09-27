#include <stdio.h>

int main(){
    int n, x, y, i, j, sum;
    scanf("%d", &n);
    int a[n+10];
    for(i=0; i<n; i++)
    {
        scanf("%1d", &a[i]);
    }

    for(i=0, sum=0; i<n; i++)
    {
        sum += a[i];
    }

    printf("%d\n", sum);

    return 0;
}
