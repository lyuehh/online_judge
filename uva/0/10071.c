#include <stdio.h>

int main(int argc, const char *argv[])
{
    int v, t;
    while (scanf("%d %d", &v, &t) != EOF) {
        printf("%d\n", 2 * v * t);
    }
    return 0;
}
