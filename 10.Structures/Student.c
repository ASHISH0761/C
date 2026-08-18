#include<stdio.h>
#include<string.h>
typedef struct student{
        char name[30];
        int roll;
        char dept[25];
        char course[20];
        int year;
     }student;
     student s1,s2;
     void check(student s1,student s2){
        if(strcmp(s1.dept, s2.dept) == 0) printf("They are in same department");
        else printf("They are not in same department");
     }
int main(){
    //Student 1
     printf("Enter details of Student 1\n");
    printf("Roll number: ");
    scanf("%d", &s1.roll);
    printf("Name: ");
    scanf(" %[^\n]", s1.name);
    printf("Department: ");
    scanf(" %[^\n]", s1.dept);
    printf("Course: ");
    scanf(" %[^\n]", s1.course);
    printf("Year of joining: ");
    scanf("%d", &s1.year);
    // Student 2
    printf("\nEnter details of Student 2\n");
    printf("Roll number: ");
    scanf("%d", &s2.roll);
    printf("Name: ");
    scanf(" %[^\n]", s2.name);
    printf("Department: ");
    scanf(" %[^\n]", s2.dept);
    printf("Course: ");
    scanf(" %[^\n]", s2.course);
    printf("Year of joining: ");
    scanf("%d", &s2.year);
    check(s1,s2);
    return 0;
}