#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[200];
int main(int argc, const char *argv[])
{
    while (fgets(s, 200, stdin)) {
        int len = strlen(s);
        int count = 0;
        int i;
        int flag = 1;
        for (i=0; i<len; i++) {
            if (!isalpha(s[i])) {
                flag = 1;
            } else {
                if (flag == 1) {
                    count++;
                    flag = 0;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
