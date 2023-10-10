#include <stdio.h>

int main(){
    int a[100100], cnt[100100]={}, n, m, i, x;
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        x = a[i];
        cnt[x]++;
    }
    for(i=1; i<=m; i++)
    {
        printf("%d\n", cnt[i]);
    }

    return 0;
}
