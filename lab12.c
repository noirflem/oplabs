#include "stdio.h"

int sum(int a, int b) {

    return a + b;

}

int main() {

    FILE *file = fopen("path.txt", "w");
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    fprintf(file, "The result of sum: %d", sum(a, b));
    fclose(file);
    return 0;
    
}