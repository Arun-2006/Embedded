#include<stdio.h>
#include<stdint.h>
int main(){
    uint16_t A;
    printf("Enter the number to shift");
    scanf("%hu",&A);

    uint16_t n;
    printf("Enter the number of places to left shift");
    scanf("%hu",&n);

    //left shift

    A = A<<n; 
    printf("%hu",A);
    return 0;

}
