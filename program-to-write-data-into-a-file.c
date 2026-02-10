#include<stdio.h>
int main(){
        FILE* fp;
        fp=fopen("data.txt","w");
        if(fp==NULL){
            printf("filecannot be opened!\n");
            return 1;
        }
        fprintf(fp,"Welcome to File handling in C\n");
        fprintf(fp,"this text is written to the file.\n"); 
        fclose(fp);
        printf("Data written sucessfully.\n");
        return 0;
    }
