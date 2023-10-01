#include <stdio.h>

int main(){
    int a[110], t, n, i, j, k, len, cnt=0, incr, x;
    scanf("%d", &t);
    for(k=1; k<=t; k++)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(len=1, cnt=0; len<=n; len++)
        {
            for(i=0; i<=n-len; i++)
            {
                incr = 1;
                x = a[i];
                for(j=i; j<(i+len); j++)
                {
                    if(x<=a[j])
                    {
                        x = a[j];
                    }
                    else
                    {
                        incr = 0;
                        break;
                    }
                }
                if(incr == 1)
                {
                    cnt++;
                }

            }
        }
        printf("%d\n", cnt);
        
    }
    
    return 0;
}
