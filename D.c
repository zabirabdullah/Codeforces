#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100], c[100];
    int l1, l2;
    gets(a);
    gets(b);
    strcpy(c,a);
    l1 = strlen(a);
    l2 = strlen(b);
    strcat(a, b);
    c[0] = b[0];
    b[0] = a[0];

    printf("%d %d\n", l1, l2);
    printf("%s\n", a);
    printf("%s %s\n", c, b);
    //6 min
    return 0;
}
