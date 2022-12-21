#include <stdio.h>
#include "math.h"

enum Cars {

    car,
    truck,
    bus,
    sportcar,

};

struct BF {

    unsigned char keyboard: 4;

};

struct Square {

    int a;
    int x;
    int y;

};

int S(struct Square *A) {

    return A->a * A->a;

}

int P(struct Square *A) {

    return A->a * 4;

}

int Perim(struct Square *A, struct Square *B) {

    return sqrtf(powf(B->x - A->x, 2) + powf(B->y - A->y, 2)) * 4;

}

int main() {
    //Задание №1
    enum Cars c, t, b, s;
    c = car;
    t = truck;
    b = bus;
    s = sportcar;
    printf("%d", b);
    printf("\n");

    //Задание №2
    struct Square sq;
    scanf("%d", &sq.a);
    printf("S = %d\n", S(&sq));
    printf("P = %d\n", P(&sq));
    struct Square A = {3, 4};
    struct Square B = {2, 5};
    printf("P with coords = %d\n", Perim(&A,&B));


    //Задание №3
    struct BF bf;
    int key;
    printf("Enter number of key (Ready - 1; Low toner - 2; Damaged - 3; No paper - 4): ");
    scanf("%d", &key);

    if (key == 1) {
        bf.keyboard = 1;
    }
    if (key == 2) {
        bf.keyboard = 2;
    }
    if (key == 3) {
        bf.keyboard = 3;
    }
    if (key == 4) {
        bf.keyboard = 4;
    }
    printf("%u\n", bf.keyboard);

    return 0;
}
