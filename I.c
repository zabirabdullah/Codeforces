#include <stdio.h>
#include <math.h>

int main(){
    int n, x, flag=0, sum=0, i, j;
    scanf("%d", &n);

    for(i=10, j=0; i<(n*10); i*=10)
    {
        x = (n%i)/(i/10);
        sum = sum * pow(10, j) + x;
        if(j<1){
            j++;
        }
    }

    for(i=0; i<8; i++)
    {
        x = pow(10, i);
        if(n==x){
            printf("1\nNo\n");
            flag++;
        }
    }
    if(flag==0)
    {
        printf("%d\n", sum);
        if(n-sum == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
