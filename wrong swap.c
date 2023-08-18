#include<stdio.h>

void wrong_swap(int a, int b);
int main(){
   int a=3, b=4;
  
   printf("value of a and b before swap is %d and %d\n", a, b);
   wrong_swap(a,b); // will not swap due to call by value
   printf("value of a and b after swap is %d and %d\n", a, b);
   return 0;
}

void wrong_swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    

}