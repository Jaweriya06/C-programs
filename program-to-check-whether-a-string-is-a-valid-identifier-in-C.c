#include <stdio.h>
#include <ctype.h>

int main() {
    char s[50];
    int valid = 1;

    scanf("%s", s);
    if(!(isalpha(s[0]) || s[0]=='_')) valid = 0;

    for(int i=1; s[i] && valid; i++)
        if(!(isalnum(s[i]) || s[i]=='_'))
            valid = 0;

    if(valid) printf("Valid Identifier");
    else printf("Invalid Identifier");
    return 0;
}