#include <stdio.h>

int main(){
    int a, b, c, g, m, s;
    scanf("%d%d%d", &a, &b, &c);

    if((a==b && b==c) || (a>b && b==c) || (a==b && a>c))
    {
        g=a;
        m=b;
        s=c;
    }
    else if(b>a && a==c)
    {
        g=b;
        m=a;
        s=c;
    }
    else if(c>a && a==b)
    {
        g=c;
        m=a;
        s=b;
    }
    else if(a==c && a>b)
    {
        g=a;
        m=c;
        s=b;
    }
    else if(b==c && b>a)
    {
        g=b;
        m=c;
        s=a;
    }
    else if(a>b && a>c && b>c)
    {
        g=a;
        m=b;
        s=c;
    }
    else if(a>b && a>c && c>b)
    {
        g=a;
        m=c;
        s=b;
    }
    else if(b>a && b>c && a>c)
    {
        g=b;
        m=a;
        s=c;
    }
    else if(b>a && b>c && c>a)
    {
        g=b;
        m=c;
        s=a;
    }
    else if(c>a && c>b && a>b)
    {
        g=c;
        m=a;
        s=b;
    }
    else if(c>a && c>b && b>a)
    {
        g=c;
        m=b;
        s=a;
    }

    printf("%d\n%d\n%d\n", s, m, g);
    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}
