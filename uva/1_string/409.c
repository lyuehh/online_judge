#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char *argv[])
{
    int a, b;
    int cas = 1;
    while (scanf("%d %d", &a, &b) == 2) {
        char k[21][21], e[21][75], count[21];
        memset(k, '\0', sizeof(k));
        memset(e, '\0', sizeof(e));
        memset(count, 0, sizeof(count));

        int i, j;
        int max = 0;
        char buf[80];
        getchar();
        /* printf("a: %d, b: %d\n", a, b); */

        for (i=0; i<a; i++) {
            fgets(k[i], sizeof(k[i]), stdin);
            k[i][strlen(k[i])-1] = '\0';
            /* printf("k: %s\n", k[i]); */
        }
        for (i=0; i<b; i++) {
            fgets(e[i], sizeof(e[i]), stdin);
            e[i][strlen(e[i])-1] = '\0';
        }
        for (i=0; i<b; i++) {
            memset(buf, '\0', sizeof(buf));
            for (j=0; j<strlen(e[i]); j++) {
                buf[j] = tolower(e[i][j]);
            }

            for (j=0; j<a; j++) {
                char *c = buf;
                while ((c=strstr(c, k[j])) != NULL) {
                    /* printf("k: %s\n", k[j]); */
                    /* printf("c: %s\n", c); */
                    count[i]++;
                    /* printf("k[j]: %ld\n", strlen(k[j])); */
                    /* printf("buf: %ld\n", strlen(buf)); */
                    c += strlen(k[j]);
                    /* c += strlen(buf); */
                    /* printf("c: %s\n", c); */
                }
            }
            if (count[i] > max) max = count[i];
        }
        /* printf("max: %d\n", max); */
        printf("Excuse Set #%d\n", cas);
        for (i=0; i<b; i++) {
            if (count[i] == max) {
                printf("%s\n", e[i]);
            }
        }
        printf("\n");
        cas++;
    }
    return 0;
}
