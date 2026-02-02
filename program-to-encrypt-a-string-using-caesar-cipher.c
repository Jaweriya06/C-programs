#include <stdio.h>
#include <ctype.h>

int main(){
    char s[100];
    int k;

    fgets(s,100,stdin);
    scanf("%d",&k);

    for(int i=0;s[i];i++){
        if(isalpha(s[i])){
            char b = islower(s[i])?'a':'A';
            s[i]=(s[i]-b+k)%26+b;
        }
    }
    printf("%s",s);
    return 0;
}