#include <stdio.h>

int main(int argc, const char *argv[])
{
    char c;
    int i, ans;
    while((c=getchar()) != EOF) {
        if (c == '\n') {
            if (!i) putchar(ans);
            i = 128;
            ans = 0;
            continue;
        }
        if (c == 'o') {
            ans +=i;
            i /= 2;
        }
        if (c == ' ') {
            i /= 2;
        }
    }
    return 0;
}
