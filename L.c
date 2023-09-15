#include <stdio.h>

int main(){
    int a, b, g, s, i;
    scanf("%d%d", &a, &b);
    if(a>b){
        g=a;
        s=b;
    }else{
        g=b;
        s=a;
    }

    for(i=s; i>0; i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
