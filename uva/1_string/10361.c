#include <stdio.h>
#include <string.h>

char s[100];
int main(int argc, const char *argv[])
{
    int n, i, j, l;
    char c, s[6][100]; /* each pair, 5 parts of line 1, 1 parts of line 2 */
    scanf("%d", &n);
    getchar(); /* jump over \n */
    for (i=0; i<n; i++) {
        j = 1;
        l = 0;
        memset(s, '\0', sizeof(s));
        while ((c =getchar()) != '\n') { /* first line of each pair*/
            /* jump over <>, and start new s[++j] */
            /* <, > as the delimiter */
            if (c == '<' || c == '>') {
                j++;
                l = 0;
                continue;
            }
            s[j][l] = c;
            l++;
        }
        fgets(s[0], sizeof(s[0]), stdin); /* the last char is \n */
        /* printf("[%s]\n", s[0]); */
        s[0][strlen(s[0])-1] = '\0'; /* remove the last 4 char, ... and \n */
        s[0][strlen(s[0])-1] = '\0';
        s[0][strlen(s[0])-1] = '\0';
        s[0][strlen(s[0])-1] = '\0';
        printf("%s%s%s%s%s\n", s[1], s[2], s[3], s[4], s[5]);
        printf("%s%s%s%s%s\n", s[0], s[4], s[3], s[2], s[5]);
    }
    return 0;
}
