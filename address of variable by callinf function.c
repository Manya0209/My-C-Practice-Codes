#include<stdio.h>
void address(int i);
int main(){
    int i;
    printf("address of variable is %u\n", &i);
    address(i);
    
    return 0;
}

void address(int a){
    printf("address of variable now is %u\n", &a);
    
}