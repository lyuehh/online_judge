#include <stdio.h>
#include <string.h>

#define N 1000
int sum[N+1] = {0};

void add(char *str) {
    int i, l;
    l = strlen(str)-1;
    for (i=N; l>=0; i--, l--) {
        sum[i] += str[l] - '0';
    }
    for (i=N; i>=0; i--) {
        if (sum[i] > 9) {
            sum[i] -= 10;
            sum[i-1] += 1;
        }
    }
}

int main(int argc, const char *argv[])
{
    int i;
    char s[N];
    gets(s);
    while (strcmp(s, "0")) {
        add(s);
        gets(s);
    }
    for (i=0; i<=N; i++) {
        if (sum[i]) break;
    }
    for (; i<=N; i++) {
        printf("%d", sum[i]);
    }
    printf("\n");
    return 0;
}
