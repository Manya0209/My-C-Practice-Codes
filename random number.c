#include<stdio.h>
#include<stdlib.h> //rand()
#include<time.h> //time()

int main(){
    int number;
    srand(time(0));
    number= rand()%100 + 1; //so that no. is b/w 1-100
    printf("the number is %d", number);
    return 0;

}