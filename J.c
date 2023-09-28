#include <stdio.h>

int main(){
    int a[1010], n, i, min, cnt;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0, min=a[0]; i<n; i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
    }
    for(i=0, cnt=0; i<n; i++)
    {
        if(a[i]==min)
        {
            cnt++;
        }
    }
    if(cnt%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}
