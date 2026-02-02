#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int k=0;

    fgets(s,100,stdin);
    for(int i=0;s[i];i++)
        if(s[i]!=' ' && s[i]!='\n')
            t[k++] = s[i];
    t[k]='\0';

    int l=0,r=k-1,flag=1;
    while(l<r)
        if(t[l++]!=t[r--]) { flag=0; break; }

    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}