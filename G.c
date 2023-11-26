#include <stdio.h>
#include <string.h>

int main(){
    char s[110000];
    int i, l, c;
    gets(s);

    l = strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]==',')
        {
            printf(" ");
        }
        else if((s[i]>='a') && (s[i]<='z'))
        {
            c = s[i] - 32;
            printf("%c", c);
        }
        else if((s[i]>='A') && (s[i]<='Z'))
        {
            c = s[i] + 32;
            printf("%c", c);
        }
    }
    //8 min
    return 0;
}
