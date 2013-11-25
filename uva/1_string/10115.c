#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int n;
    scanf("%d", &n);
    while (n != 0) {
        /* printf("n: %d\n", n); */
        char s[80+5][80+5], t[80+5][80+5];
        char str[255+5];
        char c[255+5];
        memset(s, '\0', sizeof(s));
        memset(t, '\0', sizeof(t));
        memset(str, '\0', sizeof(str));
        int i;
        /* jump over \n */
        getchar();
        for (i=0; i<n; i++) {
            fgets(s[i], sizeof(s[i]), stdin);
            s[i][strlen(s[i])-1] = '\0';
            fgets(t[i], sizeof(t[i]), stdin);
            t[i][strlen(t[i])-1] = '\0';
        }
        fgets(str, sizeof(str), stdin);
        str[strlen(str)-1] = '\0';

        char *ffct;
        for (i=0; i<n; i++) {
            while (1) {
                ffct = strstr(str, s[i]);
                if (ffct == NULL) break;
                sprintf(c, "%s", ffct+strlen(s[i]));
                /* printf("c: %s\n", c); */
                sprintf(ffct, "%s", t[i]);
                /* printf("ffct: %s\n", ffct); */
                sprintf(ffct+strlen(t[i]), "%s", c);
                /* printf("str: %s\n", str); */
                /* printf("ffct+strlen: %s\n", ffct+strlen(t[i])); */
            }
            /* printf("strstr %d: %s\n", i, strstr(str, s[i])); */
        }
        printf("%s\n", str);

        /* for (i=0; i<n; i++) { */
        /*     printf("s: %s\n", s[i]); */
        /*     printf("t: %s\n", t[i]); */
        /* } */
        /* printf("str: %s\n", str); */

        scanf("%d", &n);
    }
    return 0;
}
