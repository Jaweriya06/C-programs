#include <stdio.h>
int main() {
    char s[100];
    int freq[256]={0}, i;
    gets(s);
    for(i=0;s[i];i++)
        freq[s[i]]++;
    for(i=0;s[i];i++)
        if(freq[s[i]]==1){
            printf("%c", s[i]);
            return 0;
        }
    printf("No non-repeating character");
    return 0;
}