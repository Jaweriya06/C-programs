#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100], temp[200];
    gets(s);
    gets(t);

    if(strlen(s) != strlen(t)){
        printf("Not Rotation");
        return 0;
    }

    strcpy(temp, s);
    strcat(temp, s);

    if(strstr(temp, t))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}