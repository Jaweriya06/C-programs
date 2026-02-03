#include <stdio.h>
int main() {
    char s[100];
    int i,len=0;
    gets(s);
    while(s[len]) len++;
    for(i=len-1;i>=0;i--)
        printf("%c", s[i]);
    return 0;
}