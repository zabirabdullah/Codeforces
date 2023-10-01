#include <stdio.h>

int main(){
    int a[1010], b[1010], i, j, n, flag=0, cnt=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                a[i] = b[j] = 0;
                cnt++;
                break;
            }
        }
    }
    if(cnt==n)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
