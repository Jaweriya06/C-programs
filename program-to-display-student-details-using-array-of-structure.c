#include<stdio.h>
struct student {
    int id;
    char name[20];
};
void display(struct Stud s[],int n)
{
    for(int i=0;i<n;i++)
    printf("ID: %d, Name: %s\n",s[i].id,s[i].nam);

}
int main(){
    struct Stud s[3]={{101,"anu"},{102,"vinu"},{103,"ritu"}};
    display (s,3);
    return 0;
}