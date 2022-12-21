#include <stdio.h>


int main(){

    char str[] = "";
    printf("Enter string:\t");
    scanf("%s", &str);
    printf("Your string: %s", str);

    float number;
    printf("\nEnter number:\t");
    scanf("%f", &number);
    printf("Your number: %.2f\n", number);
    return 0;

}

