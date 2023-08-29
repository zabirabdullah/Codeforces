#include <stdio.h>

int main(){
    unsigned long long n, m, x, y, sum;
    scanf("%llu %llu", &n, &m);
    x = n%10;
    y = m%10;
    sum = x + y;
    printf("%llu\n", sum);

    return 0;
}
