#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char d[1000010][210] = { '\0' };
int n = 0, len = 0;

int cmp_string(const void *_a, const void *_b) {
    char *a = (char *)_a;
    char *b = (char *)_b;
    return strcmp(a, b);
}

int main(int argc, const char *argv[])
{
    char ch;
    while(1) {
        if ((ch=getchar()) == EOF) {
            break;
        }
        /* save the word in the arrary */
        if (isalpha(ch)) {
            d[n][len++] = tolower(ch);
        } else if (isalpha(d[n][0])) {
        /* } else { */
            d[n++][len] = '\0';
            len = 0;
        }
    }
    qsort(d, n, sizeof(d[0]), cmp_string);
    int i;
    for (i=0; i<n; i++) {
        if (strcmp(d[i], d[i+1])) { /* equal return 0 */
            /* printf("1 i: %d, s: %s\n", i, d[i]); */
            printf("%s\n", d[i]); /* not equal, then print */
        }
    }
    return 0;
}
