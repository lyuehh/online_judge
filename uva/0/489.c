#include <stdio.h>
#include <string.h>

char s[100]; /* the words */
char u[100]; /* the guess */
char us[100]; /* the unique char of words */

int is_exist(char str[], char c) {
    int i, count = 0;
    for (i=0; i<strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}
int main(int argc, const char *argv[])
{
    int n; /* case */
    scanf("%d", &n);
    while (n != -1) {
        scanf("%s", s);
        scanf("%s", u);
        printf("Round %d\n", n);

        int len_s = strlen(s);
        int len_u = strlen(u);
        int flag = 0;
        int yy = 0, nn = 0; /* match char count, not match char count */

        int i, j;
        for (i=0; i<len_u; i++) {
            if (nn >= 7 || yy == len_s) {
                break;
            }
            flag = 0;
            for (j=0; j<i; j++) {
                if (u[j] == u[i]) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                continue;
            }
            if (is_exist(s, u[i]) == 0) {
                nn++;
            } else {
                yy += is_exist(s, u[i]);
            }
        }
        if (nn >= 7) {
            printf("You lose.\n");
        } else if (yy == len_s) {
            printf("You win.\n");
        } else {
            printf("You chickened out.\n");
        }
        /* printf("yy: %d\n", yy); */
        /* printf("nn: %d\n", nn); */
        /* printf("You win.\n"); */
        /* printf("%s\n", s); */
        /* printf("%s\n", u); */
        scanf("%d", &n);
    }
    return 0;
}
