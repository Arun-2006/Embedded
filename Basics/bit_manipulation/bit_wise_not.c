#include<stdint.h>
#include<stdio.h>

int main(){
    uint16_t num;

    printf("Enter a  number to perform bitwise NOT operation\n");
    scanf("%hu",&num);

    //bitwise NOT
    uint16_t not = ~num;

    printf("%hu\n",not);

    return 0;


}

