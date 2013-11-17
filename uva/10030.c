#include <stdio.h>

int main()
{
    int n,f,a,b,c;
    long sum;
    scanf("%d", &n);
    while(n--)
    {
        sum=0;
        scanf("%d", &f);
        while(f--)
        {
            scanf("%d %d %d", &a, &b, &c);
            sum+=a*c;
        }
        printf("%ld\n", sum);
    }
    return 0;
}
