#include <stdio.h>

int main(){
    char e[100];
    scanf("%s",e);

    for(int i=0;e[i] && e[i]!='@';i++)
        printf("%c",e[i]);
    return 0;
}