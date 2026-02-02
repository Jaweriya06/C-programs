#include <stdio.h>

int main() {
    char s[100];
    fgets(s,100,stdin);

    for(int i=0;s[i] && s[i]!='\n';i++)
        printf("%c = %d\n", s[i], s[i]);
    return 0;
}