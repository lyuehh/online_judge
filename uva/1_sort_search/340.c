#include <stdio.h>
#include <string.h>

#define MAX 1000+5
int code[MAX];
int guess[MAX];

int main(int argc, const char *argv[])
{
    int n;
    int now = 0;
    int aa[10], bb[10];
    while(scanf("%d", &n) == 1) {
        if (n == 0) break;
        printf("Game %d:\n", ++now);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%d", &code[i]);
        }
        while (1) {
            for (i=1; i<=n; i++) scanf("%d", &guess[i]);
            if (guess[1] == 0) break;
            int x = 0, y = 0;
            memset(aa, 0, sizeof(aa));
            memset(bb, 0, sizeof(bb));

            for (i=1; i<=n; i++) {
                if (code[i] == guess[i]) {
                    x++;
                } else {
                    aa[code[i]]++;
                    bb[guess[i]]++;
                }
            }
            for (i=1; i<=9; i++) {
                if (aa[i] < bb[i]) {
                    y += aa[i];
                } else {
                    y += bb[i];
                }
            }
            /* printf("aa:\n"); */
            /* for (i=1; i<=9; i++) { */
            /*     printf("%d ", aa[i]); */
            /* } */
            /* printf("\nbb:\n"); */
            /* for (i=1; i<=9; i++) { */
            /*     printf("%d ", bb[i]); */
            /* } */
            printf("    (%d,%d)\n", x, y);
        }
    }
    return 0;
}
