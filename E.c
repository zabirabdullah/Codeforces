#include <stdio.h>

int main(){
    int a[1100], n, i, l, p;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    l = a[0];
    for(i=0, p=1; i<n; i++)
    {
        if(l>a[i])
        {
            l = a[i];
            p = i+1;
        }
    }
    printf("%d %d\n", l, p);

    return 0;
}
