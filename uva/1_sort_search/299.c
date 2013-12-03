#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int a[51], n, i, j, w, min, test, ans;
    scanf("%d", &test);
    while(test--) {
        ans = 0;
        scanf("%d", &n);
        for (i=1; i<=n; i++) scanf("%d", &a[i]);
        for (i=1; i<=n; i++) {
            min = 2000000000;
            for (j=i; j<=n; j++) {
                if (a[j] < min) {
                    min = a[j];
                    w = j;
                }
            }
            for (j=w; j>=i+1; j--) {
                a[j] = a[j-1];
            }
            a[i] = min;
            ans += w - i;
        }
        printf("Optimal train swapping takes %d swaps.\n", ans);
    }
    return 0;
}
