#include <iostream>
using namespace std;

/*
int main(int argc, const char *argv[])
{
    double m = 0, t;
    int i;
    cin >> t;
    while (t != 0) {
        for (i = 2; m < t; i++) {
            m += 1 / (double)i;
        }
        m = 0;

        cout << i-2 << " card(s)" << endl;
        cin >> t;
    }
    return 0;
}
*/

int main(int argc, const char *argv[])
{
    double m = 0, t;
    int i;
    cin >> t;
    while (t != 0) {
        for(i = 2;; i++) {
            m += 1 / (double)i;
            if ( m > t) {
                cout << i-1 << " card(s)" << endl;
                cin >> t;
                break;
            }
        }
        m = 0;
    }
    return 0;
}
