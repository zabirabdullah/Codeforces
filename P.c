#include <stdio.h>
#include <string.h>

int main(){
    char s[1100000];

    int len, n=0;

    gets(s);

    len  = strlen(s);
    for(int i=0; i<len; i++)
    {
        if( ( (s[i] >= 65 && s[i] <= 90) ||  (s[i] >= 97 && s[i] <= 122) ) && ( (s[i+1] < 65 || s[i+1] > 90) && (s[i+1] < 97 || s[i+1] > 122) ) )
        {
            n++;
        }
    }

    printf("%d\n", n);

    return 0;
}
