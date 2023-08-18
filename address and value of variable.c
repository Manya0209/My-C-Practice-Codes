#include<stdio.h>

int main(){
    int a;
    printf("address of variable a is %u\n", &a);
    printf("value of varaible is %u\n", *&a);
    return 0;

}