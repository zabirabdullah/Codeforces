#include <stdio.h>

int main(){
    int a, b, g, s, n, x, i, flag, flag2=0;
    scanf("%d%d", &a, &b);
    if(a>b){
        g=a;
        s=b;
    }else{
        g=b;
        s=a;
    }

    for(n=s; n<=g; n++)
    {
        flag=0;
        for(i=10, x=n; i<(n*10); i*=10)
        {
            x = (n%i)/(i/10);
            if(x!=4 && x!=7)
            {
                flag++;
                break;
            }
        }
        if(flag==0 && n!=1)
        {
            printf("%d ", n);
            flag2++;
        }
    }

    if(flag2==0)
    {
        printf("-1");
    }
    printf("\n");

    return 0;
}
