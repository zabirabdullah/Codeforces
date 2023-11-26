#include <stdio.h>
#include <string.h>
// 110 min

int main(){
    int n, q, len, i, j, k, a, l, r;
    char s[11000], query[11000], temp[11000], alph[30];
    for(i=0; i<26; i++)
    {
        alph[i] = 97+i;
    }
    scanf("%d%d", &n, &q);
    scanf("%s", s);
    len = strlen(s);
    for(i=0; i<q; i++)
    {
        scanf("%s", query);

        int pop_back = strcmp(query, "pop_back");
        int front = strcmp(query, "front");
        int back = strcmp(query, "back");
        int sort = strcmp(query, "sort");
        int reverse = strcmp(query, "reverse");
        int print = strcmp(query, "print");
        int substr = strcmp(query, "substr");
        int push_back = strcmp(query, "push_back");

        len = strlen(s);
        if(pop_back==0)
        {
            s[len-1]='\0';
        }
        else if(front==0)
        {
            printf("%c\n", s[0]);
        }
        else if(back==0)
        {
            printf("%c\n", s[len-1]);
        }
        else if(sort==0)
        {
            scanf("%d %d", &l, &r);
            if(l>r)
            {
                int t = r;
                r = l;
                l = t;
            }
            for(j=0, a=0; j<26; j++)
            {
                for(k=(l-1); k<r; k++)
                {
                    if(s[k]==alph[j])
                    {
                        temp[a] = s[k];
                        a++;
                    }
                }
            }
            for(j=(l-1), a=0; j<r; j++, a++)
            {
                s[j] = temp[a];
            }
        }
        else if(reverse==0)
        {
            scanf(" %d %d", &l, &r);
            if(l>r)
            {
                int t = r;
                r = l;
                l = t;
            }
            for(j=(r-1), k=0; j>=(l-1); j--, k++)
            {
                temp[k] = s[j];
            }
            for(j=(l-1), k=0; j<=(r-1); j++, k++)
            {
                s[j] = temp[k];
            }
        }
        else if(print==0)
        {
            scanf(" %d", &l);
            printf("%c\n", s[l-1]);
        }
        else if(substr==0)
        {
            scanf("%d%d", &l, &r);
            if(l>r)
            {
                int t = r;
                r = l;
                l = t;
            }
            for(j=(l-1); j<=(r-1); j++)
            {
                printf("%c", s[j]);
            }
            printf("\n");
        }
        else if(push_back==0)
        {
            scanf(" %c", &temp[0]);
            s[len] = temp[0];
        }
    }

    return 0;
}
