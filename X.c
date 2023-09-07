#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(((c>=a && c<=b) || (d>=a && d<=b)) || ((a>=c && a<=d) || (b>=c && b<=c)))
    {
        if(c>=a && d>=b)
        {
            printf("%d %d\n", c, b);
        }
        else if(a>=c && b>=d)
        {
            printf("%d %d\n", a, d);
        }
        else if(a>=c && b<=d)
        {
            printf("%d %d\n", a, b);
        }
        else if(a<=c && b>=d)
        {
            printf("%d %d\n", c, d);
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
