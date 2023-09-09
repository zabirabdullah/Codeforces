#include <stdio.h>

int main(){
    int n, i, flag;
    scanf("%d", &n);
    flag = 0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1 || n==1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}
