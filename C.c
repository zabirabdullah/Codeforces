#include <stdio.h>

int main(){
    long long a[1010], n, i;
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            a[i]=2;
        }
        else if(a[i]>0)
        {
            a[i]=1;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
