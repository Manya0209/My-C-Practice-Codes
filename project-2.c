#include<stdio.h>
#include<time.h> //time()
#include<stdlib.h> //rand()
int SnakeWaterGun(char you, char comp){
    if(you==comp){
        return 0;
    }
    //Non-draw Cases
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='s' && comp=='g'){
        return -1;
    }
    if(you=='w' && comp=='s'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }
}

int main(){
    int number;
    char you, comp;
    srand(time(0));
    number= rand()%100 + 1;

    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
   
   printf("Enter 's' for snake, 'w' for water, 'g' for gun:\n");
   scanf("%c", &you);
   int result= SnakeWaterGun(you,comp);
   printf("You chose '%c' and comp chose '%c'.",you, comp);
   
   if(result==0){
    printf("Game draw!");
   }
   else if(result==1){
    printf("You win!");
   }
   else{
    printf("You lose!");
   }
   return 0;

}