#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int k, n;
    scanf("%d", &n);
    getchar();
    for (k=1; k<=n; k++) {
        char s[1024];
        fgets(s, sizeof(s), stdin);
        double U=0, I=0, P=0;
        int i, w=0;
        for (i=0; i<=strlen(s); i++) {
            if ((s[i] == 'U' || s[i] == 'I' || s[i] == 'P') && s[i+1] == '=') {
                int j, fu = 0;
                double shu = 0;
                for (j=i+2; j<=strlen(s); j++) { /* extract the value */
                    if (s[j] == 'A' || s[j] == 'V' || s[j] == 'W') break;
                    else if (s[j] == 'm') shu *= 0.001;
                    else if (s[j] == 'k') shu *= 1000;
                    else if (s[j] == 'M') shu *= 1000000;
                    else if (s[j] == '.') fu = j; /* mark the . */
                    else {
                        if (fu == 0) shu = shu*10 + (s[j] - '0');
                        else shu += (s[j] - '0') * (pow(10, (fu-j))); /* if has ., then multi it */
                    }
                }
                if (s[i] == 'U') U = shu;
                else if (s[i] == 'I') I = shu;
                else P = shu;
                if (w == 0) {
                    w = 1;
                    i = j; /* jump over 1, parse 2 */
                } else {
                    break;
                }
            }
        }
        printf("Problem #%d\n", k);
        if (U == 0) printf("U=%.2lfV\n\n", P/I);
        else if (P == 0) printf("P=%.2lfW\n\n", I*U);
        else printf("I=%.2lfA\n\n", P/U);
    }
    return 0;
}
