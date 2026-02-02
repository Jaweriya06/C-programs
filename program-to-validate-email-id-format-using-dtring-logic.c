#include <stdio.h>
#include <string.h>

int main(){
    char e[100];
    scanf("%s",e);

    char *at=strchr(e,'@');
    char *dot=strrchr(e,'.');

    if(at && dot && at<dot) printf("Valid");
    else printf("Invalid");
    return 0;
}