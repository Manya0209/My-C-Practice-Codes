//greatest of 4
#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("enter number a: \n");
    scanf("%d",&a);

    printf("enter number b: \n");
    scanf("%d",&b);

    printf("enter number c: \n");
    scanf("%d",&c);

    printf("enter number d: \n");
    scanf("%d",&d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("%d is big",a);
            }
            else{
                printf("%d is big",d);
            }
        }if(c>a){
            if(c>d){
                printf("%d is big",c);
            } else{
                printf("%d is big",d);
            }
        }
    }
    else if(b>a){

    }
}