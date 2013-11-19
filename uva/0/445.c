#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char *argv[])
{
    char c;
    int sum = 0;
    while ((c=getchar()) != EOF) {
        if (isdigit(c)) {
            sum += (c - 48);
        } else {
            if (c == '!' || c == '\n') {
                printf("\n");
            } else {
                while (sum > 0) {
                    if (c == 'b') {
                        printf("%c", ' ');
                    } else {
                        printf("%c", c);
                    }
                    sum--;
                }
            }
        }
    }
    return 0;
}
