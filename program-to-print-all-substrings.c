#include <stdio.h>
int main() {
    char s[100];
    int i,j,k;
    gets(s);
    for(i=0;s[i];i++)
        for(j=i;s[j];j++){
            for(k=i;k<=j;k++)
                printf("%c", s[k]);
            printf("\n");
        }
    return 0;
}