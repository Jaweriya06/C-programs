#include <stdio.h>
#include <string.h>

int main(){
    char p[20];
    scanf("%s",p);

    for(int i=0;i<strlen(p)-4;i++)
        printf("*");
    printf("%s",p+strlen(p)-4);
    return 0;
}