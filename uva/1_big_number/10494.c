#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
    int len;
    int s[1000];
} bign;

bign a, res;
char str[1000];
long b;

void change(bign * a) {
    int i;
    a->len = strlen(str);
    for (i = 0; i < a->len; i++)
        a->s[i] = str[i] - '0';
}

void div2() {
    int i, j = 0;
    long num = 0;
    for (i = 0; i < a.len; i++) {
        num = num * 10 + a.s[i];
        res.s[j] = num / b;
        num = num % b;
        j++;
    }
    (&res)->len = j;
}

long mod() {
    int i;
    long ans = 0;
    for (i = 0; i < a.len; i++) {
        ans = ans * 10 + a.s[i];
        ans = ans % b;
    }
    return ans;
}

int main() {
    char c;
    while (scanf("%s %c %ld", str, &c, &b) != EOF) {
        change(&a);
        if (c == '/') {
            int i = 0, j;
            div2();
            while (i < res.len - 1 && res.s[i] == 0)
                ++i;
            for (j = i; j < res.len; j++) {
                printf("%d", res.s[j]);
            }
            printf("\n");
        } else if (c == '%') {
            long aa;
            aa = mod();
            printf("%ld\n", aa);
        }
    }
    return 0;
}

