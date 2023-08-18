#include<stdio.h>

float average(int a, int b, int c);
int main(){
    int a, b, c;
    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);
    printf("enter c\n");
    scanf("%d", &c);

    printf("average of three numbers is %f",average(a,b,c));
    return 0;


}

float average(int a, int b, int c){
float av= (float)(a+b+c)/3;
return av;
}
