#include <stdio.h>

int main(){
    int n, d, m, y;
    scanf("%d", &n);
    y = n/365;
    m = (n%365)/30;
    d = (n%365)%30;
    printf("%d years\n%d months\n%d days\n", y, m, d);

    return 0;
}
