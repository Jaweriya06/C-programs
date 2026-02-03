#include <stdio.h>
int main() {
    char s[200], word[50], min[50], max[50];
    int i=0,j=0,len,first=1;
    gets(s);
    while(1){
        if(s[i]==' '||s[i]=='\0'){
            word[j]='\0';
            len=j;
            if(first){
                strcpy(min,word);
                strcpy(max,word);
                first=0;
            } else {
                if(strlen(word)<strlen(min)) strcpy(min,word);
                if(strlen(word)>strlen(max)) strcpy(max,word);
            }
            j=0;
            if(s[i]=='\0') break;
        } else word[j++]=s[i];
        i++;
    }
    printf("Smallest: %s\nLargest: %s", min, max);
    return 0;
}