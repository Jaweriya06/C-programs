#include<stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    int id;
    char name[20];
    struct Date dob; // Nested structure
};
int main() {
struct Student s1 ={101, "kiran", {15,8,2000}};
printf("Name:%\n",s1.name);
print("DOB: %d-%d\n", s1.dob.day,s1.dob.month,s1.dob.year);
return 0;
}
