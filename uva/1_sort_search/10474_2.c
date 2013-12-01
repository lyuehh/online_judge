#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *_a, const void *_b) {
    int *a = (int *)_a;
    int *b = (int *)_b;
    /* printf("xx: %d\n", *a - *b); */
    return *a - *b;
}

int main(int argc, const char *argv[])
{
    int n, q;
    int now = 0;
    while(scanf("%d %d", &n, &q) == 2) {
        if (n == 0 && q == 0) break;
        printf("CASE# %d:\n", ++now);
        /* printf("n: %d, q: %d\n", n, q); */
        int i, j;
        int nn[10000+5];
        memset(nn, 0, sizeof(nn));
        for (i=1; i<=n; i++) {
            scanf("%d", &nn[i]);
            /* printf("l: %d\n", nn[i]); */
        }

        /* for (j=0; j<n; j++) { */
        /*     printf("nn[%d]: %d\n", j, nn[j]); */
        /* } */
        /* printf("------\n"); */

        qsort(nn, n+1, sizeof(int), cmp);

        /* for (j=0; j<n; j++) { */
        /*     printf("nn[%d]: %d\n", j, nn[j]); */
        /* } */

        for(i=0; i<q; i++) {
            int guess;
            scanf("%d", &guess);
            int flag = 0;
            /* printf("guess: %d\n", guess); */
            for (j=1; j<=n && nn[j] != 0; j++) {
                /* printf("nn[%d]: %d\n", j, nn[j]); */
                if (nn[j] == guess) {
                    /* printf("%d found at %d\n", guess, j+2); */
                    flag = j;
                    /* continue; */
                    break;
                } else {
                    /* printf("%d not found\n", guess); */
                    continue;
                    /* flag = 0; */
                    /* break; */
                }
            }
            if (flag) {
                printf("%d found at %d\n", guess, j);
            } else {
                printf("%d not found\n", guess);
            }
        }
    }
    return 0;
}
