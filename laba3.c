#include "stdio.h"

int main(){

    int num1;
    int num2;
    int num3;

    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Dec: %d\n", num1);
    printf("Oct: %o\n", num1);
    printf("Hex: %x\n", num1);
    printf("Moved: %x\n", (num1>>2));
    printf("Negative: %x\n",~(num1));

    printf("Second number: ");
    scanf("%x", &num2);
    num3 = num1 & num2;
    printf("Result: %x", num3);
    return 0;

}