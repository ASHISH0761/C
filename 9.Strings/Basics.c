#include <stdio.h>
int main(){
    char ch[]={'C','o','l','l','e','g','e',' ','W','a','l','l','a','h'};//computer does not add '\0' at the end of the string
    //char str[]="College Wallah";//computer automically adds '\0' at the end of the string
    int i=0;
    while(ch[i]!='\0'){
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}
//INPUT OUTPUT OF STRING WITHOUT LOOP
#include <stdio.h>
#include<string.h>
int main(){
   char str[40];
   gets(str);//to take input of entire sentence
   //scanf("%s",str);//only the first word of the string is taken as input
    // printf("%s",str);
    //to take full sentence input by scanf we can use %[^\n]s in place of %s
    puts(str);//to print a string
    return 0;
}