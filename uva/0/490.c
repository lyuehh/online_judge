#include <stdio.h>
#include <string.h>

char s[100][100];

int main(int argc, const char *argv[])
{
    int i=0, j;
    int count = 0;
    int max = 0;
    memset(s, 0, sizeof(s));
    while (gets(s[i])) {
        /* printf("%s\n", s[i]); */
        /* printf("%ld\n", strlen(s[i])); */
        if (strlen(s[i]) > max) max = strlen(s[i]);
        i++;
        count++;
    }
    /* printf("%d\n", count); */
    /* printf("%d\n", max); */
    for (j=0; j<max; j++) {
        for (i=count-1; i>=0; i--) {
            if (s[i][j] == 0) {
                printf("%c", ' ');
            } else {
                printf("%c", s[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
