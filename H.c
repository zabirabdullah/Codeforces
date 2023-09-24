#include <stdio.h>

int main(){
    int a[1010], a2[1010], n, min, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                min=a[j];
                a[j]=a[i];
                a[i] = min;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
  
    return 0;
}
