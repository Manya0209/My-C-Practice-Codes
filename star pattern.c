#include<stdio.h>

void printpattern(int n);
int main(){
    int n= 5;
    printpattern(n);
    return 0;
}

void printpattern(int n){
    if(n==1){
        printf("*\n");
        return 0;
    }
    printpattern(n-1);
    for(int i=2;i<2*n-1;i++){
        printf("*");
        
    }
    printf("\n");
}