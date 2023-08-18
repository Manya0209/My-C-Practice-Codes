#include<stdio.h>

float force(float mass);
int main(){
float mass;
printf("enter mass");
scanf("%f", &mass);

printf("force is %f", force(mass));
return 0;
}

float force(float mass){
    float result = mass* 9.8;
    return result;
}