#include <stdio.h>
#include <malloc.h>

int main(){

    char massive2[5] = {'H','e','l', 'l', 'o'};
    for (int i = 0; i < 5; ++i) {
        printf("massive[%d]: %c\n", i, *(massive2+i));
    }

    int elements;
    scanf("%d", &elements);
    char* massive = (char*)malloc(elements * sizeof(char));

    scanf("%s", massive);
    for (int i = 0; i < elements; ++i) {
        printf("%c", massive[i]);
    }

    printf("\n");

    free(massive);
    return 0;
}