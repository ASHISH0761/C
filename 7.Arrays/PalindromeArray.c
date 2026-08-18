#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[]={1,2,3,4,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0;
    int j=n-1;
    bool flag=false;
    while(i<j){
        if(a[i]==a[j]){
            flag=true;
        }
        else{
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if (flag==true){
        printf("The array is a palindrome.");
    }
    else{
        printf("The array is not a palindrome.");
    }
    return 0;
}       