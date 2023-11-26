#include <stdio.h>

int main(){
    char c, alph[26];
    int rep[26]={}, n, i, j, k;
    for(i=0; i<26; i++)
    {
        alph[i] = 97+i;
    }
    scanf("%d\n", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%c", &c);
        rep[c-97]++;
    }
    for(i=0; i<26; i++)
    {
        for(j=0; j<rep[i]; j++)
        {
            printf("%c", alph[i]);
        }
    }

    return 0;
}
