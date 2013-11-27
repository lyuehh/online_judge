#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    char a[300], b[300];
    char f;
    int MAX = 2147483647;
    /* scanf("%d %s %d", &a, &f, &b); */
    /* printf("%d %c %d\n", a, f, b); */

    while(scanf("%s %c %s", a, &f, b) == 3) {
        printf("%s %c %s\n", a, f, b);
        double a1 = atof(a);
        double b1 = atof(b);
        if (a1 > MAX) {
            printf("first number too big\n");
        }
        if (b1 > MAX) {
            printf("second number too big\n");
        }
        if (f == '+') {
            if ((a1+b1) > MAX) {
                printf("result too big\n");
            }
        } else if (f == '*') {
            if ((a1*b1) > MAX) {
                printf("result too big\n");
            }
        }

    }
    return 0;
}
