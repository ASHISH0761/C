#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        int salary;
        int age;
    }p1,p2;
    strcpy(p1.name,"Ashish Ranjan");
    p1.salary=80000;
    p1.age=25;
    strcpy(p2.name,"Manav Kumar");
    p2.salary=70000;
    p2.age=35;
    printf("The name of first person is %s\n",p1.name);
    printf("The age of second person is %d\n",p2.age);
    return 0;
}