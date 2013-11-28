#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s1[] = "A   3  HIL JM O   2TUVWXY5";
char s2[] = "1SE Z  8 ";

int main(int argc, const char *argv[])
{
    char s[30];
    while (gets(s)) {
        int pal = 1, mir = 1;
        int i;
        int n = strlen(s);
        for (i=0; i<n; i++) {
            if (s[i] != s[n-i-1]) {
                pal = 0;
                break;
            }
        }

        for (i=0; i<n; i++) {
            /* if (isalpha(s[i]) && (s[n-i-1]!=s1[s[i]-'A'])) { */
            if (isalpha(s[n-1-i]) && (s[i]!=s1[s[n-i-1]-'A'])) {
                mir = 0;
                break;
                /* } else if (isdigit(s[i]) && (s[n-i-1]!=s2[s[i]-'1'])) { */
            } else if (isdigit(s[n-i-1]) && (s[i]!=s2[s[n-1-i]-'1'])) {
                mir = 0;
                break;
            }
        }
        for (i=0; i<n; i++) {
            if (s[i] == '0') {
                s[i] = 'O';
            }
        }
        if (pal && mir) printf("%s -- is a mirrored palindrome.\n", s);
        else if(pal) printf("%s -- is a regular palindrome.\n", s);
        else if(mir) printf("%s -- is a mirrored string.\n", s);
        else printf("%s -- is not a palindrome.\n", s);
        printf("\n");
    }
    return 0;
}
