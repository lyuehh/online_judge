#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    long a, l;
    int c = 1; /* case */
    scanf("%ld %ld", &a, &l);
    while (a != -1 && l != -1) {
        /* printf("%d\n", a); */
        /* printf("%d\n", l); */
        long aa = a;
        int term = 0;
        int flag = 1;
        while (a <= l || a == 1) {
            if (a % 2 == 0) {
                a = a / 2;
            } else {
                a = 3 * a + 1;
            }
            /* printf("a: %d\n", a); */

            if (a == 1) {
                flag = 0;
                break;
            }
            term++;
        }
        printf("Case %d: A = %ld, limit = %ld, number of terms = %d\n",
              c, aa, l, flag ? (term) : term+2);
        c++;
        scanf("%ld %ld", &a, &l);
    }
    return 0;
}
