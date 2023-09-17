#include <stdio.h>

int main(){
    int n, a, b, g, s, i, j, x, sum1, sum;
    scanf("%d%d%d", &n, &a, &b);
    g = (a>b)? a : b;
    s = (a>b)? b : a;

    for(i=s, sum=0; i<=n; i++)
    {
        for(j=10, sum1=0; j<=(i*10); j*=10)
        {
            x = (i%j)/(j/10);
            sum1 = sum1 + x;
        }
        if(sum1>=s && sum1<=g)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
