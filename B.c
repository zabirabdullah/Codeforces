#include <stdio.h>
#include <stdlib.h>

int main(){
    long long a[100010], n, i, x, flag=0;
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    scanf("%lld", &x);
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            printf("%lld\n", i);
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1\n");
    }

    return 0;
}
