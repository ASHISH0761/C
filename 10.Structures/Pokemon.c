#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
      int hp; 
      int speed; 
      int attack;
      char tier; 
      char name[15];
     }pokemon;
    typedef struct legendarypokemon{
       pokemon normal;//Structure Nested
       char ability[10];
     }legendarypokemon;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.attack=100;
    mewtwo.normal.hp=150;
    mewtwo.normal.speed=456;
    mewtwo.normal.tier='S';
    strcpy(mewtwo.normal.name,"Mewwo");
    return 0;
}