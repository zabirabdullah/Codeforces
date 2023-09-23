#include <stdio.h>
#include <math.h>

int main(){
    unsigned long long n, x, d, sum;
    int s, t, i, j, k, l, cnt, cnt2;
    scanf("%d", &t);
    for(s=1; s<=t; s++)
    {
        scanf("%llu", &n);
        for(cnt=0, x=n; x>0; cnt++)
        {
            x = x/2;
        }
        k=cnt;
        cnt2=0;
        for(i=1, sum=0, l=0; i<=cnt; i++, k--)
        {
            for(x=n, j=k; j>1; j--)
            {
                x=x/2;
            }
            d = x%2;
            if(d==1)
            {
                cnt2++;
            }
            sum = sum * pow(10, l) + d;
            if(l<1){
                l++;
            }
        }
        for(i=1, l=0, sum=0; i<=cnt2; i++)
        {
            sum = sum * pow(10,l) + 1;
            if(l<1){
                l++;
            }
        }
        for(i=cnt2-1, sum=0; i>=0; i--)
        {
            sum = sum + pow(2, i);
        }
        printf("%d\n", sum);

    }
  
    return 0;
}
