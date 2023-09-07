#include <stdio.h>

int main(){
    float n, s, t;
    int x;
    scanf("%f", &n);
    x = n;
    s = n - x;
    if(s==0)
    {
        printf("int %d\n", x);
    }
    else
    {
        t = n - x;
        printf("float %d %.3f\n", x, t);
    }

    return 0;
}
