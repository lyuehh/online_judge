#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    char s[] = "22.2234";
    double shu = 0;
    int i;
    int fu = 0;
    for (i=0; i<strlen(s); i++) {
        if (s[i] == '.') {
            fu = i;
        } else {
            if (fu == 0) shu  = shu * 10 + s[i] - '0';
            else shu += (s[i] - '0') * pow(10, (fu-i));
        }
    }
    printf("%.6lf\n", shu);
    return 0;
}
