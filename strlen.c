#include<stdio.h>

int strlen(char *st){
    int len=0;
    char *ptr=st;

    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}

int main(){
    char *st= "manya";
    strlen(st);
    printf("length of string is %d", strlen(st));
    return 0;
}
