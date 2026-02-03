#include <stdio.h>
#include <string.h>

int expand(char s[], int l, int r) {
    while(l>=0 && s[l]==s[r]) {
        l--; r++;
    }
    return r-l-1;
}

int main() {
    char s[200];
    gets(s);

    int start=0, end=0, i, len1, len2, len;
    int n = strlen(s);

    for(i=0;i<n;i++){
        len1 = expand(s, i, i);
        len2 = expand(s, i, i+1);
        len = (len1 > len2) ? len1 : len2;

        if(len > end-start){
            start = i - (len-1)/2;
            end   = i + len/2;
        }
    }
    for(i=start;i<=end;i++)
        printf("%c", s[i]);

    return 0;
}