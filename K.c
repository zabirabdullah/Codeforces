#include <stdio.h>

int main(){
    int a, b, c, g, s;
    scanf("%d%d%d", &a, &b, &c);
    
    if(a==b && b==c)
    {
        g=a;
        s=c;
    }
    else if(a==b && a>c)
    {
        g=a;
        s=c;
    }
    else if(a==c && a>b)
    {
        g=a;
        s=b;
    }
    else if(b==c && b>a)
    {
        g=b;
        s=a;
    }
    else if(a==b && c>a)
    {
        g=c;
        s=a;
    }
    else if(a==c && b>a)
    {
        g=b;
        s=a;
    }
    else if(b==c && a>b)
    {
        g=a;
        s=b;
    }
    else if(a>b && a>c && b>c)
    {
        g=a;
        s=c;
    }
    else if(a>b && a>c && c>b)
    {
        g=a;
        s=b;
    }
    else if(b>a && b>c && a>c)
    {
        g=b;
        s=c;
    }
    else if(b>a && b>c && c>a)
    {
        g=b;
        s=a;
    }
    else if(c>a && c>b && a>b)
    {
        g=c;
        s=b;
    }
    else if(c>a && c>b && b>a)
    {
        g=c;
        s=a;
    }
    printf("%d %d\n", s, g);

    return 0;
}
