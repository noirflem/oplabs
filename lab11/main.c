#include <stdio.h>
#include "lab11header.h"
#include "functionsLab11.c"

int main(){

    struct Parallelogram ParCoords;
    printf("Fill in the coordinates of the vertices from the upper left corner, clockwise\n");
    scanf("%d %d", &ParCoords.x1, &ParCoords.y1);
    scanf("%d %d", &ParCoords.x2, &ParCoords.y2);
    scanf("%d %d", &ParCoords.x3, &ParCoords.y3);
    scanf("%d %d", &ParCoords.x4, &ParCoords.y4);

    int s = S(ParCoords);
    int p = P(ParCoords);

    printf("%d\n", s);
    printf("%d\n", p);
    return 0;

}