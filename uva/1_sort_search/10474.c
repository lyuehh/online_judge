#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int n, q;
    int now = 0;
    while(scanf("%d %d", &n, &q) == 2) {
        if (n == 0 && q == 0) break;
        printf("CASE# %d:\n", ++now);
        /* printf("n: %d, q: %d\n", n, q); */
        int i;
        /* int nn[100001] = {0}; */
        /* int bb[100001] = {0}; */
        int nn[10] = {0};
        int bb[10] = {0};
        int x;
        memset(nn, 0, sizeof(nn));
        for (i=0; i<n; i++) {
            scanf("%d", &x);
            nn[x]++;
        }

        int sum;
        sum=0;
        for(i=0;i<10;i++) {
        /* for(i=0;i<10001;i++) { */
            if(nn[i]) {
                bb[i]=sum;
                sum+=nn[i];
            }
        }
        for(i=0;i<10;i++) {
            printf("a[%d]: %d\n", i, nn[i]);
            /* printf("b[%d]: %d\n", i, bb[i]); */
        }

        printf("-----\n");
        for(i=0;i<10;i++) {
            /* printf("a[%d]: %d\n", i, nn[i]); */
            printf("b[%d]: %d\n", i, bb[i]);
        }
        for(i=0; i<q; i++) {
            int guess;
            scanf("%d", &guess);
            if (nn[guess]) {
                printf("%d found at %d\n", guess, bb[guess]+1);
            } else {
                printf("%d not found\n", guess);
            }
        }
    }
    return 0;
}

