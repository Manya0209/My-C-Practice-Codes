#include<stdio.h>

void change(int i);
int main(){
    int i;
    printf("values of variable is %d", i);
    change(i);
    return 0;

}

void change(int i){
    printf("value of variable after change is %d", 10* *&i);
}