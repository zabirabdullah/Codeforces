#include <stdio.h>

int main(){
    int n, x, i, flag;
    scanf("%d", &n);
    for(x=2; x<=n; x++)
    {
        flag=0;
        for(i=2; i<x; i++)
        {
            if(x%i == 0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ", x);
        }
    }
    printf("\n");

    return 0;
}
