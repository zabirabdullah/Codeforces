#include <stdio.h>
#include <string.h>

int main(){
    char s[1100];
    int l, i, j, flag;
    gets(s);
    l = strlen(s);
    flag = 0;

    for(i=0, j=l-1; i<l; i++, j--)
    {
        if(s[i]!=s[j])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    //5 min
    return 0;
}
