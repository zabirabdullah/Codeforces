#include <stdio.h>

int main(){
    char x;
    scanf("%c", &x);
    if(x>='a' && x<='z')
    {
        x -= 32;
    }
    else if(x>='A' && x<='Z')
    {
        x +=32;
    }
    printf("%c", x);

    return 0;
}
