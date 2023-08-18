#include<stdio.h>

int fib(int n);
int main(){
    int n;
    printf("enter number n");
    scanf("%d", &n);

    printf("fibonacci series of n is %d", fib(n));
    return 0;

}

int fib(int n){
    int result;
    if(n<=1){
        return n;
    }
    else if(n==2){
        return 1;
    }
    else{
    return result = fib(n-1) + fib(n-2);
    }
}