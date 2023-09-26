#include <stdio.h>
#include <math.h>

int prime(int a)
{
    int f = 0;
    for(int j = 2; j<=sqrt(a); j++)
    {
        if(a%j==0)
        {
            f = 1;
            break;
        }
    }
    if(a==1)
    {
        f = 1;
    }
    return f;
}

int main(){
    int t, n, flag, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        flag = prime(n);
        if(flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
