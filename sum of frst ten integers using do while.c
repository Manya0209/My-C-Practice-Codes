//sum of frst 10
#include<stdio.h>

int main(){
    int i=1, sum=0, n=10;
    do{
        sum +=i;
        i++;
       
    } while(i<=n);
     printf("sum is %d \n", sum);
    
}