#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);

    for(int i = 0; s[i]; i++) {
        if(strchr("AEIOUaeiou", s[i]))
            s[i] = '*';
    }
    printf("%s", s);
    return 0;
}