#include <iostream>
using namespace std;

const double pi = 3.1415926;

int main(int argc, const char *argv[])
{
    int n, i, m;
    double x, y;
    cin >> n;
    for (i = 1; i<= n; i++) {
        cin >> x >> y;
        m = (int)((x*x + y*y) * pi / 100) + 1;
        cout << "Property " << i << ": This property will begin eroding in year " << m << "." << endl;
    }
    cout << "END OF OUTPUT." << endl;
    return 0;
}
