#include <stdio.h>

int main(){
    int x, i;
    scanf("%d", &x);
    x = (x - x%1000)/1000;
    if(x%2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}
