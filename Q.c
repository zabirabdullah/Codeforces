#include <stdio.h>

int main(){
    long long n, x, i, j, t;
    scanf("%lld", &t);
    for(j=1; j<=t; j++)
    {
        scanf("%lld", &n);
        if(n==0)
        {
            printf("0");
        }
        for(i=10, x=n; i<=(n*10); i*=10)
        {
            x = (n%i)/(i/10);
            printf("%lld ", x);
        }
        printf("\n");
    }

    return 0;
}
