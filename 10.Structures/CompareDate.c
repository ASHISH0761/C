#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
     }date;

     date a,b;
     
     date arr[2];
     for(int i=0;i<2;i++){
        printf("Enter Day : ");
        scanf(" %d",&arr[i].day);
        printf("Enter month : ");
        scanf("%d",&arr[i].month);
        printf("Enter year : ");
        scanf("%d",&arr[i].year);
     }
    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;


    if(flag==true) printf("Equal");
    else printf("Unequal");
    return 0;
}