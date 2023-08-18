#include<stdio.h>

struct vector{
    int x;
    int y;
};

int main(){
  struct vector v1,v2;
  v1.x= 2;
  v1.y= 5;
  printf("x dim is %d and y dim is %d", v1.x, v1.y);

  v2.x= 4;
  v2.y= 6;
 printf("x dim is %d and y dim is %d", v2.x, v2.y);
 
 return 0;
}