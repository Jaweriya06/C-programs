#include <stdio.h>
struct Student{
    int id;
    char name[20];

};
int main(){
    struct Student s[2]={{101,"Arun"},{102,"Vasu"}};
    for(int i=0;i<2;i++)
    printf("ID: %d, Name: %s\n",s[i].name);
    return 0;
}
