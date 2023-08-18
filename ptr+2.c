#include<stdio.h>

int main(){
    int arr[10];
    int *ptr= &arr[0]; //can also be written as *ptr=arr
    ptr = ptr+2;
    if(ptr==&arr[2]){
        printf("this points to same address");
    }
    else{
        printf("this points to different address");
    }
    return 0;
}