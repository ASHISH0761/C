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

void change(pokemon* p){
    *p->attack=80;
    // (*p).attack=80;
    (*p).hp=70;
    (*p).speed=110;
    (*p).tier='S';
    strcpy((*p).name,"Raichu");
}
int main(){
    pikachu={60,70,100,'A',"Pikachu"};
    // pikachu.hp=60;
    // pikachu.attack=70;
    // pikachu.speed=100;
    // pikachu.tier='A';
    // strcpy(pikachu.name,"Pikachu");
    
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);


    return 0;
}