#include <stdio.h>

int main(){
    int a[110][110], n, m, i, j, x, f=0;
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &x);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]==x)
            {
                f++;
                printf("will not take number\n");
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==0)
    {
        printf("will take number\n");
    }

    return 0;
}
