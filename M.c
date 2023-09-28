#include <stdio.h>

int main(){
    int a[1010], n, i, min, max, pos_min, pos_max;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = -110000;
    min = 110000;
    for(i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min = a[i];
            pos_min = i;
        }
        if(max<a[i])
        {
            max = a[i];
            pos_max = i;
        }
    }
    a[pos_max] = min;
    a[pos_min] = max;

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
