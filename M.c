#include <stdio.h>
#include <string.h>

int main(){
    char s[110000], h[]="hello";
    int l, i, j;
    gets(s);
    l = strlen(s);
    for(i=0, j=0; i<l; i++)
    {
        if(s[i]==h[j])
        {
            j++;
        }
    }
    if(j==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    //8 min
    return 0;
}
