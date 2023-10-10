#include <stdio.h>

int main(){
    int a[10100], b[10100], n, m, i, j, flag, cnt;
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0, j=0, cnt=0; j<m; i++)
    {
        if(a[i]!=b[j])
        {
            i++;

        }
        if(a[i]==b[j])
        {
            cnt++;
            j++;
        }
        if(i>n)
            break;
     }
    if(cnt==m)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
