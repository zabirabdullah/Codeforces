#include <stdio.h>

int main(){
    int n, x, i, cnto, cnte, cntp, cntn;
    scanf("%d", &n);
    cnto=cnte=cntp=cntn=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x%2!=0)
        {
            cnto++;
        }
        if(x%2==0)
        {
            cnte++;
        }
        if(x>0)
        {
            cntp++;
        }
        if(x<0)
        {
            cntn++;
        }
    }
    printf("Even: %d\n", cnte);
    printf("Odd: %d\n", cnto);
    printf("Positive: %d\n", cntp);
    printf("Negative: %d\n", cntn);

    return 0;
}
