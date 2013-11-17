#include <stdio.h>

int main(int argc, const char *argv[])
{
    char c;
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            putchar(c-7);
        } else {
            putchar(c);
        }
    }
    return 0;
}
