#include<stdio.h>
#include<stdlib.h>

int set_bit(uint16_t b, uint16_t num){
    uint16_t bit_mask = 1<<b; 
    int set = num & bit_mask;

    if(set != 0)
        return 1;
    
    else
        return 0;

}

int isPowerOf2(uint16_t num){
    uint16_t i=0;
    uint16_t count=0;

    while(i<sizeof(num)*8){
        if(set_bit(i,num)==1)
            count++;
        i++;
    }

    if(count==1 || count ==0)
        return 1;
    
    else
        return 0;

}
int main(){
    
    uint16_t num;

    printf("Enter a number to check if it's a power of 2\n");
    scanf("%hu",&num);
    

    if(isPowerOf2(num) == 1)
        printf("Power of 2\n");
    
    else
        printf("Not a power of 2\n");


    return 0;
}
