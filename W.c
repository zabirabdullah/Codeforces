#include <stdio.h>

int main(){
    int a, b, c, sum;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
    if(( ( (s=='+')&&((a+b)==c) ) || ( (s=='-')&&((a-b)==c) ) || ( (s=='*')&&((a*b)==c) ) ) && q=='=')
    {
        printf("Yes\n");
    }
    else
    {
        if(s=='+')
        {
            sum = a+b;
        }
        else if(s=='-')
        {
            sum = a-b;
        }
        else if(s=='*')
        {
            sum = a*b;
        }
        printf("%d\n", sum);
    }

    return 0;
}
