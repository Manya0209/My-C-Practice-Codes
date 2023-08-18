#include<stdio.h>

int main(){
    int i=1, fact=1, n;
    printf("enter number\n");
    scanf("%d",&n);
    while(i<=n){
        fact *=i;
        i++;

    }
    printf("factorial is %d",fact);
    return 0;

}