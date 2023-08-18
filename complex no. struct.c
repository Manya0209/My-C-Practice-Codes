#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex c1,c2;
    c1.real= 2;
    c1.img= 3;
    printf("complex number is %d+%di\n", c1.real, c1.img);

    c2.real= 4;
    c2.img= 7;
    printf("complex number is %d+%di\n", c2.real, c2.img);

    return 0;

}