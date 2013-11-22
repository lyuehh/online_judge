#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int n, k;
    scanf("%d", &n);
    for (k=1; k<=n; k++) {
        int DNA[10];
        int i, j;
        for (i=0; i<=9; i++) {
            scanf("%d", &DNA[i]);
        }
        int now[50] = {0}, old[50];
        now[20] = 1;
        for (i=1; i<=50; i++) {
            for (j=1; j<=40; j++) {
                if (now[j] == 0) printf(" ");
                else if (now[j] == 1) printf(".");
                else if (now[j] == 2) printf("x");
                else printf("W");
            }
            printf("\n");
            memcpy(old, now, sizeof(old));
            for (j=1; j<=40; j++) {
                now[j] = DNA[old[j-1] + old[j] + old[j+1]];
            }
        }
        if (k != n) printf("\n");
    }
    return 0;
}
