#include <stdio.h>
#include <string.h>

int main() {
    char s[100], word[50], small[50], large[50];
    int i=0,j=0;

    fgets(s,100,stdin);
    while(1){
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\0'){
            word[j]='\0';
            if(strlen(word)){
                if(!strlen(small) || strlen(word)<strlen(small))
                    strcpy(small,word);
                if(strlen(word)>strlen(large))
                    strcpy(large,word);
            }
            j=0;
            if(s[i]=='\0' || s[i]=='\n') break;
        } else word[j++] = s[i];
        i++;
    }
    printf("Smallest: %s\nLargest: %s", small, large);
    return 0;
}