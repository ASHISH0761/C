#include<stdio.h>
#include<string.h>
int main(){
    char str[40] = "Ashish";
    //2nd index pe p
    for(int i=5;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='p';
    printf("%s",str);
    return 0;
}