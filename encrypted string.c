#include<stdio.h>

void encrypt(char *st){
     char *ptr= st;
     while(*ptr!='\0'){
        *ptr = *ptr +1;
        ptr++;
     }
}
    
    int main(){
    char st[]= "do this";
    encrypt(st);
    printf("encrypted string is %s", st);
}