#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int cas; /* case */
    scanf("%d", &cas);
    /* printf("cas: %d\n", cas); */
    while (cas > 0) {
        int height, fre; /* height < 9 */
        getchar();
        scanf("%d", &height); /* total: 2*height - 1 */
        scanf("%d", &fre);
        /* printf("height: %d\n", height); */
        /* printf("fre: %d\n", fre); */
        while (fre > 0) {
            int i, j;
            for (i=1; i<=height; i++) {
                for (j=i; j>0; j--) {
                    /* printf("xxx\n"); */
                    printf("%d", i);
                }
                printf("\n");
            }
            for (i=height-1; i>0; i--) {
                for (j=i; j>0; j--) {
                    /* printf("xxx\n"); */
                    printf("%d", i);
                }
                printf("\n");
            }
            if (fre > 1) {
                printf("\n");
            }
            fre--;
        }
        cas--;
        if (cas > 0) {
            printf("\n");
        }
    }
    return 0;
}
