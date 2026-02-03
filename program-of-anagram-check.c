#include <stdio.h>
int main() {
    char a[100], b[100];
    int f1[256]={0}, f2[256]={0}, i;
    gets(a);
    gets(b);
    for(i=0;a[i];i++) f1[a[i]]++;
    for(i=0;b[i];i++) f2[b[i]]++;
    for(i=0;i<256;i++)
        if(f1[i]!=f2[i]){
            printf("Not Anagram");
            return 0;
        }
    printf("Anagram");
    return 0;
}