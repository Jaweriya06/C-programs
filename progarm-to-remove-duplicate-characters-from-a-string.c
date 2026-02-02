#include <stdio.h>

int main() {
    char s[100], res[100];
    int k = 0, found;

    fgets(s,100,stdin);
    for(int i=0;s[i] && s[i]!='\n';i++){
        found = 0;
        for(int j=0;j<k;j++)
            if(s[i]==res[j]) found=1;
        if(!found) res[k++] = s[i];
    }
    res[k]='\0';
    printf("%s", res);
    return 0;
}