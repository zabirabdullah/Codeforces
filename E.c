#include <stdio.h>
#include <string.h>

int main(){
    char s[1100000];
    int sum, l, i;

    gets(s);
    l  = strlen(s);

    for(i=0, sum=0; i<l; i++)
    {
        sum += s[i] - 48;
    }
    printf("%d\n", sum);
    //4 min
    return 0;
}
