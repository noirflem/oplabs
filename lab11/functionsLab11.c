#include "math.h"
#include "lab11header.h"

float P(struct Parallelogram *ParCoords){

    float a, b;
    a = abs(ParCoords->x1 - ParCoords->x2);
    b = sqrt(abs(ParCoords->y2 - ParCoords->y3) * abs(ParCoords->y2 - ParCoords->y3) + (abs(ParCoords->x2 - ParCoords->x3) * abs(ParCoords->x2 - ParCoords->x3)));
    return (a + b) * 2;

}

int S(struct Parallelogram *ParCoords){

    return (ParCoords->y1 - ParCoords->y4) * (ParCoords->x2 - ParCoords->x1);

}
