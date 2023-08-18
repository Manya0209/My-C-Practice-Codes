//factorial
#include<stdio.h>

int main(){
    int i=1,fact=1,n;
    printf("enter number n: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact *=i;
    }
    printf("factorial is %d",fact);
    return 0;
}