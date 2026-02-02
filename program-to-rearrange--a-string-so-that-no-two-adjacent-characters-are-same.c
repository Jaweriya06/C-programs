#include <stdio.h>
#include <string.h>

int main(){
    char s[100],res[100];
    int freq[256]={0},k=0;

    fgets(s,100,stdin);
    for(int i=0;s[i] && s[i]!='\n';i++)
        freq[s[i]]++;

    for(int i=0;i<256;i++)
        while(freq[i]--)
            res[k++]=i;

    res[k]='\0';

    for(int i=1;i<k;i++)
        if(res[i]==res[i-1]){
            printf("Not Possible");
            return 0;
        }

    printf("%s",res);
    return 0;
}