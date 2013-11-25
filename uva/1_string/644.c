#include <stdio.h>
#include <string.h>

char str[50][50];

int com(int t, int x) {
    int n = strlen(str[t]);
    int m = strlen(str[x]);
    n = (n > m ? m : n);
    int i;
    for (i=0; i<n; i++) {
        if (str[t][i] != str[x][i]) { /* has not equal char, then is not */
            return 1;
        }
    }
    return 0; /* if all char in x was in t, then return 0 */
}

int main(int argc, const char *argv[])
{
    int leap, t, i, cas;
    leap = 0;
    t = 0;
    cas = 1;
    while (gets(str[t])) {
        if (str[t][0] == '9') {
            if (leap) {
                printf("Set %d is not immediately decodable\n", cas);
            } else {
                printf("Set %d is immediately decodable\n", cas);
            }
            cas++;
            t = 0;
            leap = 0;
            continue;
        }
        for (i=0; i<t; i++) {
            if (com(t, i) == 0) {
                leap = 1;
            }
        }
        t++;
    }
    return 0;
}
