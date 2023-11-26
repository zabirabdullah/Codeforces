#include <stdio.h>
#include <string.h>

int main(){
    char s[110];
    int i, t, l, n;
    scanf("%d\n", &t);

    for(i=0; i<t; i++)
    {
        gets(s);
        l = strlen(s);
        if(l>10)
        {
            n = l - 2;
            printf("%c%d%c\n", s[0], n, s[l-1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }
    //9 min
    return 0;
}
