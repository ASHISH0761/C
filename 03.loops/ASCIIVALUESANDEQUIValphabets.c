#include<stdio.h>
int main(){
    int n=65;
    while(n<=90){
        char p=(char)n;
        printf("%d\t%c\n",n,p);
        n++;
    }    
}