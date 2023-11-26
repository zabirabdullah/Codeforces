#include <stdio.h>
#include <string.h>

int main(){
    char x[100], y[100];
    int n;
    gets(x);
    gets(y);
    n = strcmp(x, y);
    if(n==0)
    {
        printf("%s\n", x);
    }
    else if(n>0)
    {
        printf("%s\n", y);
    }
    else
    {
        printf("%s\n", x);
    }

    //4 min
    return 0;
}
