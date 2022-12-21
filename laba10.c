#include <stdio.h>

int SUMDIGITS(int n){

    if (n == 0){
        return 0;
    }
    return (n % 10 + SUMDIGITS(n / 10));
}


int main(){

    //Задание 4
    int num;
    scanf("%d", &num);
    int result = SUMDIGITS(num);
    printf("%d", result);
    return 0;


}
