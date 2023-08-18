#include<stdio.h>

int main(){
    int p,c,m,total;
    printf("enter p marks: \n");
    scanf("%d",&p);

    printf("enter c marks: \n");
    scanf("%d",&c);
     
    printf("enter m marks: \n");
    scanf("%d",&m);

    total= p+c+m/3;
    if((total<44)|| p<33 || c<33 || m<33){
        printf("fail");
     }
    else{
        printf("pass");
    } 
    return 0;

}