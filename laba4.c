#include <stdio.h>

// интервал 33-55
int main(){
    int number,help1,help2;
    printf("Enter number: ");
    scanf("%d", &number);

    help1 = 55 / number;
    help2 = number / 33;

    printf("%d\n", help1 & help2);

//задание 2

    printf("%d", (number >> 14) & 1);


    return 0;
}