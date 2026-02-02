#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    fgets(s,50,stdin);
    int n = strlen(s)-1;

    for(int i=0;i<n;i++)
        for(int j=1;j<=n-i;j++)
            printf("%.*s\n", j, s+i);
    return 0;
}