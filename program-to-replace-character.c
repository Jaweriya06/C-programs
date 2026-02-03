#include <stdio.h>
int main() {
    char s[100], a, b;
    int i;
    gets(s);
    scanf(" %c %c",&a,&b);
    for(i=0;s[i];i++)
        if(s[i]==a) s[i]=b;
    printf("%s", s);
    return 0;
}