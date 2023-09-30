#include <stdio.h>

int main(){
    unsigned long long arr[60], x, a, b;
    int i, n;
    scanf("%d", &n);
    a=0, b=1;
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            x = 0;
        }
        else if(i==1)
        {
            x = 1;
        }
        else
        {
            x = a + b;
            a = b;
            b = x;
        }
        arr[i] = x;
    }
    printf("%llu\n", arr[n-1]);

    return 0;
}
