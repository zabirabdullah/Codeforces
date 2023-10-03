#include <stdio.h>

int main(){
    int a[110][110], n, m, i, j;
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=(m-1); j>=0; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
