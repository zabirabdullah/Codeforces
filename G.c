#include <stdio.h>

int main(){
    int n, x, i, j;
    unsigned long long sum;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x==0)
        {
            printf("1\n");
        }
        else
        {
            for(j=1, sum=x; j<x; j++)
            {
                sum = sum*j;
            }
            printf("%llu\n", sum);
        }
    }

    return 0;
}
