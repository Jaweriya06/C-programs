#include <stdio.h>

int main() {
    char s[100];
    fgets(s,100,stdin);

    for(int i=0;s[i];i++)
        if(i%2==0 && s[i]!='\n')
            printf("%c ", s[i]);
    return 0;
}