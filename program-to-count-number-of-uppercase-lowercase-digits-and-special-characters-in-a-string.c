#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int u=0,l=0,d=0,sp=0;

    fgets(s,100,stdin);
    for(int i=0;s[i];i++){
        if(isupper(s[i])) u++;
        else if(islower(s[i])) l++;
        else if(isdigit(s[i])) d++;
        else if(s[i]!='\n') sp++;
    }
    printf("Upper=%d\nLower=%d\nDigits=%d\nSpecial=%d",u,l,d,sp);
    return 0;
}