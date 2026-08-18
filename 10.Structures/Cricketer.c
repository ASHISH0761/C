#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[25];
        int age;
        int n;
        float avg;
     }cricketer;
     cricketer arr[3];
     for(int i=0;i<3;i++){
        printf("Enter name : ");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter Age : ");
        scanf("%d",&arr[i].age);
        printf("Enter Number of Matches Played : ");
        scanf("%d",&arr[i].n);
        printf("Enter average : ");
        scanf("%f",&arr[i].avg);
     }
     for(int i=0;i<3;i++){
        printf("\nName : %s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("Number of Matches Played : %d\n",arr[i].n);
        printf("Average : %.2f\n\n",arr[i].avg);
     }
     return 0;
}