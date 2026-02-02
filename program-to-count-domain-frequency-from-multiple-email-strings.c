#include <stdio.h>
#include <string.h>

int main(){
    char e[5][100],dom[5][50];
    int cnt[5]={0},n=5,k=0;

    for(int i=0;i<n;i++){
        scanf("%s",e[i]);
        strcpy(dom[i],strchr(e[i],'@')+1);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
            if(strcmp(dom[i],dom[j])==0)
                cnt[i]++;
    }

    for(int i=0;i<n;i++)
        if(cnt[i]>=0)
            printf("%s : %d\n",dom[i],cnt[i]+1);
    return 0;
}