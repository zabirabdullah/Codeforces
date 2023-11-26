#include <stdio.h>
#include <string.h>

int main(){
    char a[1100], b[1100];
    int i, l1, l2;
    gets(a);
    gets(b);
    l1 = strlen(a);
    l2 = strlen(b);
    printf("%d %d\n", l1, l2);
    printf("%s %s\n", a, b);
    // 5 min
    return 0;
}
