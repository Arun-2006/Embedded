#include<stdint.h>
#include<stdio.h>

int main(){
    uint16_t num1,num2;

    printf("Enter a number 2 numbers to perform bitwise XOR operation\n");
    scanf("%hu",&num1);
    scanf("%hu",&num2);
    
    //bitwise XOR
    uint16_t xor = num1^num2;

    printf("%hu\n",xor);

    return 0;


}

