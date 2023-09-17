#include <stdio.h>

int main(){
    int n, i, j, x;
    scanf("%d", &n);
    for(i=1, x=0; i<=n; i++, x++)
    {
        for(j=1; j<=3; j++)
        {
            x = x+1;
            printf("%d ", x);
        }
        printf("PUM\n");
    }

    return 0;
}
