#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 2; i <= num; ++i) {
        int f = 1;
        for (int j = 2; j < i; ++j) {
            if ((i % j) == 0) {
                f = 0;
                break;
            }
        }
        if (f == 1)
            printf("%d ", i);
    }

    float month, percent, deposits;

    scanf("%f%f%f", &month, &percent, &deposits);

    for (int i = 0; i <= deposits; ++i) {
        month = month + ((month * percent )/ 12);
    }

    printf("%lf", month);

    return 0;
}