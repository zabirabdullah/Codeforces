#include <stdio.h>

int main(){
    int a1[1010], a2[1010], n, m, x, i, j, flag;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for(i=n-1, j=0; i>=0; i--, j++)
    {
        a2[j]=a1[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", a2[i]);
    }

    return 0;
}
