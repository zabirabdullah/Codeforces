#include <stdio.h>

int main(){
    int n, x, y, g, s, i, j, sum;
    scanf("%d", &n);
    for(j=1; j<=n; j++)
    {
        scanf("%d%d", &x, &y);
        g = (x>y)? x : y;
        s = (x>y)? y : x;

        for(i=s+1, sum=0; i<g; i++)
        {
            if(i%2!=0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);

    }

    return 0;
}
