#include <stdio.h>

int main(){
    int n, a, b, x, i;
    scanf("%d", &n);
    a=0, b=1;
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("%d", a);
        }
        else if(i==2)
        {
            printf(" %d", b);
        }
        else
        {
            x = a+b;
            printf(" %d", x);
            a=b;
            b=x;
        }

    }
    printf("\n");

    return 0;
}
