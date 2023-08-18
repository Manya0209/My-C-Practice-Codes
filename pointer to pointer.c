#include<stdio.h>

int main(){
    int i=4;
    int *j;
    int **k;
   
    j=&i;
    k=&j;
    printf("value of variable i is %d\n", **k);
    return 0;
}
