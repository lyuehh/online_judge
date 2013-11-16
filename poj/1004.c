#include <stdio.h>

int main(int argc, const char *argv[])
{
    double sum = 0.0, t;
    int i = 0, m = 11;

    while (i++ <= m) {
        scanf("%lf", &t);
        sum += t;
    }
    printf("$%.2lf\n", sum / 12.0);
    return 0;
}
