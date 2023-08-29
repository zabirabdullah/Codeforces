#include <stdio.h>

int main(){
    double a, r, pie = 3.141592653;
    scanf("%lf", &r);
    a = pie * r * r;
    printf("%.9lf\n", a);

    return 0;
}
