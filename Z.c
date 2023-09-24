#include <stdio.h>

int main(){
    int k, s, x, y, z, cnt=0;
    scanf("%d%d", &k, &s);
    for(y=0; y<=k; y++)
    {
        for(x=0; x<=k; x++)
        {
            z = s - (x + y);
            if(z>=0 && z<=k)
            {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);

    return 0;
}
