#include <stdio.h>

int main(){
    int a[110], t, n, i, j, k, len, max;
    scanf("%d", &t);    
    for(k=1; k<=t; k++)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(len=1; len<=n; len++)
        {
            for(i=0; i<=n-len; i++)
            {
                for(j=i, max=-110000; j<(len+i); j++)
                {
                    if(a[j]>max)
                    {
                        max=a[j];
                    }
                }
                printf("%d ", max);
            }
        }
        printf("\n");
    }
  
    return 0;
}
