#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int n;
    char s[100];
    int num[15]; /* space count in each line */
    int i, j;
    while (scanf("%d", &n) == 1 && n) {
        getchar(); /* enter */
        /* putchar(ss); */
        int min = 25;
        memset(num, 0, sizeof(num));
        for (i=0; i<n; i++) {
            int count = 0;
            fgets(s, 100, stdin);
            for (j=0; j<25; j++) {
                if (s[j] != 'X') count++;
            }
            num[i] = count; /* space count in each line */
            if (min > num[i]) min = num[i]; /* min space count */
        }
        int sum = 0;
        for (i=0; i<n; i++) {
            sum += (num[i] - min);
        }
        printf("%d\n", sum);
    }
    return 0;
}
