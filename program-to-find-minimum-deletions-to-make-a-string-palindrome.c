#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int l=0,r;

    fgets(s,100,stdin);
    r=strlen(s)-2;

    int del=0;
    while(l<r){
        if(s[l]==s[r]){ l++; r--; }
        else{ del++; r--; }
    }
    printf("%d",del);
    return 0;
}