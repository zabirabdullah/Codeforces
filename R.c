#include <stdio.h>

int main(){
    int n, m, g, s, i, sum;
    while(1)
    {
        scanf("%d %d", &n, &m);
        g = (n>m)? n : m;
        s = (n>m)? m : n;
        if(n<=0 || m<=0)
        {
            break;
        }
        for(i=s, sum=0; i<=g; i++)
        {
            sum = sum + i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}
