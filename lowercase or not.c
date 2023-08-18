#include<stdio.h>

int main(){
    char c;
    printf("enter alphabet: \n");
    scanf("%c",&c);

    if(islower(c)){
        printf("lowercase");
    }
    else{
        printf("not lowercase");
    }
    return 0;
}