#include<stdio.h>

float tofahrenheit(float C);
int main(){
float C;
printf("enter temp in celsius\n");
scanf("%f", &C);

printf("temp in fahrenheit is %f", tofahrenheit(C));
return 0;
}

float tofahrenheit(float C){
float F= (float) C* 9/5 + 32;
return F;
}