#include <stdio.h>
int main() {
    char s[100];
    int freq[256]={0}, i;
    gets(s);
    for(i=0;s[i];i++)
        freq[s[i]]++;
    for(i=0;i<256;i++)
        if(freq[i])
            printf("%c = %d\n", i, freq[i]);
    return 0;
}