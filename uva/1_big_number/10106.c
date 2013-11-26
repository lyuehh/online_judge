#include <stdio.h>
#include <string.h>

#define N 300
int ret[N*2+10];
char a[300];
char b[300];
int ia[300];
int ib[300];

int main(int argc, const char *argv[])
{
    while(scanf("%s %s", a, b) == 2) {
        int i;
        int j = 0;
        int la = strlen(a);
        int lb = strlen(b);
        memset(ia, 0, sizeof(ia));
        memset(ib, 0, sizeof(ib));
        memset(ret, 0, sizeof(ret));
        for (i=la-1; i>=0; i--) {
            ia[j++] = a[i] - '0';
        }
        j = 0;
        for (i=lb-1; i>=0; i--) {
            ib[j++] = b[i] - '0';
        }
        for (i=0; i<la; i++) {
            for (j=0; j<lb; j++) {
                ret[i+j] += ia[i] * ib[j];
            }
        }
        for (i=0; i<N*2+1; i++) {
            if (ret[i] >= 10) {
                ret[i+1] += ret[i] / 10;
                ret[i] %= 10;
            }
        }
        int flag = 0;

        /* for (i=N*2+1; i>=0; i--) { */
        /*     if (ret[i]) { */
        /*         flag = 1; */
        /*         printf("%d", ret[i]); */
        /*     } */
        /* } */

        for (i=N*2+1; i>=0; i--) {
            if (flag) {
                printf("%d", ret[i]);
            } else if (ret[i]) {
                printf("%d", ret[i]);
                flag = 1;
            }
        }

        if (!flag) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
