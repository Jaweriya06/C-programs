#include <stdio.h>
int main() {
    char s[100];
    int i,len=0,flag=1;
    gets(s);
    while(s[len]) len++;
    for(i=0;i<len/2;i++)
        if(s[i]!=s[len-1-i]) flag=0;
    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}