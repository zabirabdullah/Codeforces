#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j, len;
    char s[100010];

    scanf("%d\n", &n);
    gets(s);

    for(len=1; len<=n; len++)
    {
        for(i=0; i<len; i++)
        {
            printf("%c", s[j]);
            printf("\n");
        }
    }

    return 0;
}
