#include <stdio.h>
int main() {
    char s[100];
    int freq[256]={0}, i;
    gets(s);

    for(i=0; s[i]; i++){
        if(freq[s[i]] == 0){
            printf("%c", s[i]);
            freq[s[i]] = 1;
        }
    }
    return 0;
}
