#include <stdio.h>

int main(){
    unsigned long long w, x, y, z, sum1, sum2, sum;
    int a, b, c, d, e, d1, d2;
    scanf("%llu%llu%llu%llu", &w, &x, &y, &z);
    sum1 = w*x;
    sum2 = y*z;
    if(sum1>9 && sum2>9)
    {
        b = sum1%10;
        a = (sum1%100)/10;
        d = sum2%10;
        c = (sum2%100)/10;

        if((b*d)>9)
        {
            d1 = (b*d)%10;
            e = (b*d)/10;
            d2 = (a*d + c*b + e)%10;
        }
        else
        {
            d1 = b*d;
            d2 = (a*d + c*b)%10;
        }
        printf("%d%d\n", d2, d1);
    }
    else
    {
        sum = sum1 * sum2;
        sum = sum%100;
        printf("%llu\n", sum);
    }

    return 0;
}
