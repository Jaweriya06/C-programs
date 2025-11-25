#include <stdio.h>
int main(){
    float m1,m2,m3,total,avg;
    char grade;

    printf("Enter marks  three subject:");
    scanf("%f %f %f",&m1,&m2,&m3);
    //Arthematic operators
    total =m1+m2+m3;
    avg=total/3;

    //display total and avg 
    printf("\ntotal marks=%.2f",total);
    printf("\naverage marks=%.2f",avg);

    //determine grade using if else 
    if(avg>=90)
    grade='A';
    else if (avg>=80)
    grade='B';
    else if(avg>=70)
    grade='C';
    else if(avg>=60)
    grade='D';
    else if(avg>=50)
    grade='E';
    else if(avg>=0)
    grade='F';
    //Display grade 
    printf("\nGrade=%c\n",grade);
        return 0;
    }
    