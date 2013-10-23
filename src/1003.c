#include <stdio.h>

int main(int argc, const char *argv[])
{
    double t;
    double m;
    int i;
    scanf("%lf", &t);
    while (t != 0) {
        for (i = 2; m < t; i++) {
            m += 1/(double)i;
        }

        printf("%d card(s)\n", i - 2);
        scanf("%lf", &t);
        m = 0;
    }
    return 0;
}
