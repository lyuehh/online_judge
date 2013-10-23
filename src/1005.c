#include <stdio.h>

double pi = 3.1415926;

int main(int argc, const char *argv[])
{
    int n;
    int i;
    double x, y;
    int m;
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        scanf("%lf %lf", &x, &y);
        m = (int) ((x*x + y*y) * pi / 100) + 1;
        printf("Property %d: This property will begin eroding in year %d.\n",i,m);
    }
    printf("END OF OUTPUT.\n");
    return 0;
}
