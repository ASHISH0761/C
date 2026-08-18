#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter a string: ");
    gets(str);
    //size
    int len = strlen(str);
    printf("The length is: %d\n",len);
    //reverse
    int j=0;
    j=len-1;
    for(int i=0; i<=j; i++, j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse is:");//automatically ek \n add krdeta h
    puts(str);
    return 0;
}
