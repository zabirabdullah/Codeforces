#include <stdio.h>

int main(){
    int n, i, x;
    scanf("%d", &n);
    for(i=1; i<=12; i++)
    {
        x=i*n;
        printf("%d * %d = %d\n", n, i, x);
    }

    return 0;
}
