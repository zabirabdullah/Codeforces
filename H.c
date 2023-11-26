#include <stdio.h>
#include <string.h>

int main(){
    char s[110000];
    int t, l, i, j, flag;
    scanf("%d\n", &t);

    for(j=0; j<t; j++)
    {
        gets(s);
        l = strlen(s);

        for(i=0, flag=0; i<l-2; i++)
        {
            if( (s[i]==s[i+2]) && ( (s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1') ) )
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    //18 min
    return 0;
}
