#include<stdio.h>

typedef struct date{
    int date;
    int month;
    int year;
}date;

int datecmp(date d1, date d2){
   
   if(d1.year>d2.year){
    return 1;
   }
   if(d1.year<d2.year){
    return -1;
   }
   if(d1.month>d2.month){
    return 1;
   }
   if(d1.month<d2.month){
    return -1;
   }
   if(d1.date>d2.date){
    return 1;
   }
   if(d1.date<d2.date){
    return -1;
   }
   
   return 0;
}
  
  int main(){
    date d1={1,2,21};
    date d2={2,4,21};
    int x= datecmp(d1,d2);
    printf("date comparison function returns %d",x);
    return 0;
  }
