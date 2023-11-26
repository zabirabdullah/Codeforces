#include <stdio.h>
#include <string.h>

int main(){
    char s1[100], s2[100];
    int t, l1, l2, i, j, g, s;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", s1);
        scanf("%s", s2);
        l1 = strlen(s1);
        l2 = strlen(s2);
        g = (l1>l2) ? l1 : l2;
        s = (l1<l2) ? l1 : l2;
        for(j=0; j<g; j++, l1--, l2--)
        {
            if(l1>0)
            {
                printf("%c", s1[j]);
            }
            if(l2>0)
            {
                printf("%c", s2[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
