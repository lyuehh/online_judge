#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    char *s1 = "1234";
    char *s2 = "12345678998888888888888888888888888888888888888888887654321";
    printf("%lf\n", atof(s1));
    printf("%lf\n", atof(s2));
    return 0;
}
