#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    char *_a = (char *)a;
    char *_b = (char *)b;
    return strcmp(_a, _b);
}

int main(int argc, const char *argv[])
{
    int n;
    char str[2005][80];
    scanf("%d", &n);
    int i;
    getchar();
    for (i=0; i<n; i++) {
        scanf("%s", str[i]);
        gets(str[i+1]); /* ignore the name */
        /* printf("%s\n", str[i]); */
    }
    qsort(str, n, sizeof(str[0]), cmp);
    int tmp = 1;
    for (i=1; i<=n; i++) {
        if (strcmp(str[i], str[i-1]) == 0 && i < n) {
            tmp++;
        } else {
            printf("%s %d\n", str[i-1], tmp);
            tmp = 1;
        }
    }
    return 0;
}
