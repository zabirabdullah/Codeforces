#include <stdio.h>

int main(){
    int i;
    long long l;
    char c;
    float f;
    double d;
    scanf("%d %lld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%d\n%lld\n%c\n%f\n%lf\n", i, l, c, f, d);

    return 0;
}
