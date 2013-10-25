#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, m; // n 字符串的长度, m字符串的数目
    int i, j, k;
    int num[100] = {0};
    char st[100][51]; // 100表示string的总数目 -> n,51表示每个string的length -> m
    scanf("%d %d\n", &n, &m); // 10, 6
    for (i=0; i< m; i++) {
        scanf("%s", st[i]); // 保存每个字符串到st[i], 共m个
        for (j=0;j<n;j++) { // j=0,第1个字符
            for (k=j+1; k<n; k++) { // 下一个字符
                if (st[i][j] > st[i][k]) { // 当前字符比下个字符大时,计数器+1
                    num[i]++; // 保存在第i个字符的计数器里
                }
            }
        }
    }

    for (i=0; i<m; i++) {
        k = 0;
        for (j=0; j<m; j++) {
            if (num[k] > num[j]) { // 交换
                k = j;
            }
        }
        printf("%s\n", st[k]); // 每次打印最小的一个
        num[k] = 100000000; // 扔的远远的
    }
    return 0;
}
