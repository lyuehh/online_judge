#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char *argv[])
{
    double sum = 0.0, t;

    while (cin >> t) {
        sum += t;
    }
    cout << fixed << setprecision(2);
    cout << "$" << sum/12 << endl;
    return 0;
}
