#include <stdio.h>

int main(){
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);

    if((a>b && s=='>') || (a<b && s=='<') || (a==b && s=='='))
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong\n");
    }

    return 0;
}
