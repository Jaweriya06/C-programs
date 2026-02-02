#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int*)malloc(3 * sizeof (int));
    if(ptr == NULL){
        printf("Reallocation failed!\n");
        return 1;

    }
    for(int i=0;i<5;i++)
    ptr[i]=i+i;
    for(int i=0;i<5;i++)
    printf("%d",ptr[i]);
    free(ptr);
    return 0;
}