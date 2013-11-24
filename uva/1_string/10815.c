#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char d[100010][210] = {'\0'};

int cmp_string(const void *_a, const void *_b) {
    char *a = (char *)_a;
    char *b = (char *)_b;
    return strcmp(a, b);
}

int main(int argc, const char *argv[])
{
    char ch;
    int i, len = 0;
    int n = 0;
    while (1) {
        if ((ch=getchar()) == EOF) {
            break;
        }
        if (isalpha(ch)) {
            d[n][len++] = tolower(ch);
        } else {
            d[n++][len] = '\0';
            len = 0;
        }
    }
    qsort(d, n, sizeof(d[0]), cmp_string);
    for (i=0; i<n; i++) {
        if (strcmp(d[i], d[i+1])) {
            printf("%s\n", d[i]);
        }
    }
    return 0;
}
