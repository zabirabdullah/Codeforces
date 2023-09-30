#include <stdio.h>

int main(){
    int a[210], n, i, cnt, flag;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    cnt = flag = i = 0;
    while(1)
    {
        if(i==(n-1))
        {
            i=0;
            cnt++;
        }
        if(a[i]%2!=0)
        {
            flag++;
            break;
        }
        a[i] /= 2;
        i++;
    }
    printf("%d\n", cnt);

    return 0;
}
