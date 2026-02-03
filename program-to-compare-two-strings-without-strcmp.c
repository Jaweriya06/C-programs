#include <stdio.h>
int main() {
    char a[100], b[100];
    int i=0;
    gets(a);
    gets(b);
    while(a[i] && b[i] && a[i]==b[i]) i++;
    if(a[i]==b[i]) printf("Equal");
    else if(a[i]>b[i]) printf("First is greater");
    else printf("Second is greater");
    return 0;
}