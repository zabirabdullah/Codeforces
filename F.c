#include <stdio.h>
#include <math.h>

long long formula(int a, int b)
{
    long long sum = 0;
    for(int i=1; i<=b; i++)
    {
        if(i%2==0)
        {
            sum = sum + pow(a, i);
        }

    }
    return sum;
}

int main()
{
    int x, n;
    long long s;
    scanf("%d%d", &x, &n);
    s = formula(x,n);
    printf("%lld\n", s);

    return 0;
}
