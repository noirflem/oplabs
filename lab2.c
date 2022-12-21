#include <stdio.h>
#include <math.h>


int alpha;


double z1(){
    return (1 - 2 * sin(alpha) * sin(alpha))/(1 + sin(2*alpha));
}

double z2(){
    return (1- tan(alpha))/(1+ tan(alpha));
}
int main() {

    scanf("%d", &alpha);
    printf("z1 = %lf\nz2 = %lf", z1(alpha), z2(alpha));


}
