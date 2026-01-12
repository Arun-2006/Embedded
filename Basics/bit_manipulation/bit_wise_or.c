#include<stdint.h>
#include<stdio.h>

int main(){
    uint16_t num1,num2;

    printf("Enter a number 2 numbers to perform bitwise OR operation\n");
    scanf("%hu",&num1);
    scanf("%hu",&num2);
    //bitwise OR
    uint16_t or = num1|num2;

    printf("%hu\n",or);

    return 0;


}

