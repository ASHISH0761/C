#include<stdio.h>
#include<string.h>
typedef struct pokemon{
      int hp; 
      int speed; 
      int attack;
      char tier; 
      char name[15];
     }pokemon;

pokemon pikachu;

int main(){
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    pokemon* x=&pikachu;
    printf("%d\n",pikachu.hp);
    (*x).hp=70;
    printf("%d",pikachu.hp);
    return 0;
}