#include <stdio.h>

int main(){
    int n, x, i, m;
    scanf("%d", &n);

    for(i=1, m=0; i<=n; i++)
    {
        scanf("%d", &x);
        if(x>m)
        {
            m = x;
        }
    }
    printf("%d\n", m);

    return 0;
}
