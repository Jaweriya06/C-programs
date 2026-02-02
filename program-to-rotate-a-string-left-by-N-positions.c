#include <stdio.h>
#include <string.h>

int main() {
    char s[100], temp[100];
    int n,len;

    fgets(s,100,stdin);
    scanf("%d",&n);
    len = strlen(s)-1;
    n %= len;

    strncpy(temp, s, n);
    strcpy(s, s+n);
    strncat(s, temp, n);
    printf("%s", s);
    return 0;
}