#include <stdio.h>

int main(int argc, const char *argv[])
{
    double m = 0;
    int i =3;
    printf("1/3: %lf\n", 0.0 + 1/3);
    printf("1/(double)3: %lf\n", 1/(double)3);
    printf("%d\n", 0.00 == 0);

    long l = 9999999;
    int j;
    double mm;

    for (j=2;i<l;i++) {
        mm += 1/(double)j;
    }
    printf("mm: %lf\n", mm);

    int a[2][3] = {{2,3,4}, {1,2,3}};
    return 0;
}
