#include<stdlib.h>
#include<stdio.h>

int main(){
   uint16_t num;

   printf("Enter a number\n");
   scanf("%hu",&num);
   
   uint16_t bit_mask = 1;
   uint16_t out = num & bit_mask;

   if(out==1){
        printf("Odd number\n");

   }
   else{
        printf("Even Number\n");
   }
    
    return 0;
}
