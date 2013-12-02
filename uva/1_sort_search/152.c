#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int i, j, s, s1, x, y, z, n = 0;
    int count[10] = {0};
    int scan[5010][3];
    memset(scan, 0, sizeof(scan));
    while(scanf("%d %d %d", &scan[n][0], &scan[n][1], &scan[n][2]) == 3) {
        if (scan[n][0] == 0 && scan[n][1] == 0 && scan[n][2] == 0) break;
        n++;
    }
    for (i=0; i<n; i++) {
        s = 5010;
        for (j=0; j<n; j++) {
            if (i != j) {
                x = scan[i][0] - scan[j][0];
                y = scan[i][1] - scan[j][1];
                z = scan[i][2] - scan[j][2];
                s1 = (int)sqrt(x*x + y*y + z*z);
                if (s > s1) s = s1;
            }
        }
        if (s >= 10) continue;
        count[s]++;
    }
    for (i=0; i<10; i++) {
        printf("%4d", count[i]);
    }
    printf("\n");
    return 0;
}
