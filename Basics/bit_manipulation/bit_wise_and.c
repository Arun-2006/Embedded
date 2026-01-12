#include<stdint.h>
#include<stdio.h>

int main(){
    uint16_t num1,num2;

    printf("Enter a number 2 numbers to perform bitwise and operation\n");
    scanf("%hu",&num1);
    scanf("%hu",&num2);
    //bitwise AND
    uint16_t and = num1&num2;

    printf("%hu\n",and);

    return 0;


}
