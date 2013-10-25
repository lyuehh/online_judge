#include <iostream>

using namespace std;

int yuyi(int e, int i, int p) {
    int a, j =2;
    a = e * i;
    while (a % p != 1) {
        a = a / (j-1) * j;
        j++;
    }
    return a;
}

int main(int argc, const char *argv[])
{
    int p, e, i, d, a, b, c, n, j = 0;
    while (cin >> p >> e >> i >> d) {
        if (p == -1 && e == -1 && i == -1 && d == -1) {
            break;
        }
        j++;
        a = b = c = 0;
        a = yuyi(28, 33, 23);
        b = yuyi(23, 33, 28);
        c = yuyi(23, 28, 33);

        n = (a * p + b * e + i * c) % (23 * 28 * 33) - d;
        while (n <= 0) {
            n += 23 * 28 * 33;
        }
        cout << "Case " << j << ": the next triple peak occurs in " << n << " days." << endl;
    }
    return 0;
}
