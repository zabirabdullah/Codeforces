#include <stdio.h>

int main(){
    int n, j, i, flag=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0, j=n-1; i<n; i++, j--)
    {
        if(a[j]!=a[i])
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
