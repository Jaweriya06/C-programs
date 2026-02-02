#include <stdio.h>
#include <string.h>

int main(){
    char s1[50],s2[50],temp[100];
    scanf("%s%s",s1,s2);

    if(strlen(s1)!=strlen(s2)){
        printf("No"); return 0;
    }

    strcpy(temp,s1);
    strcat(temp,s1);

    if(strstr(temp,s2)) printf("Yes");
    else printf("No");
    return 0;
}