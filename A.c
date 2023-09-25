#include <stdio.h>

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int main(){
    int x, y, total;
    scanf("%d%d", &x, &y);
    total = sum(x, y);
    printf("%d\n", total);

    return 0;
}
