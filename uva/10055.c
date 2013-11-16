#include <stdio.h>

int main(int argc, const char *argv[])
{
    long a, b;
    while (scanf("%ld %ld", &a, &b) != EOF) {
        long c;
        if ((a-b) > 0) {
            c = a - b;
        } else {
            c = b - a;
        }
        printf("%ld\n", c);
    }
    return 0;
}
