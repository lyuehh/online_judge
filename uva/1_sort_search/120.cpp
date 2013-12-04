#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <deque>
using namespace std;

#define INF 0xffffff7
#define MAXN 200

vector<string> num;
deque<int> Stack;
int main()
{
    string line;
    while (getline(cin, line)) {
        cout << line << endl;
        num.clear();
        Stack.clear();
        istringstream stream(line);
        int tempNum;
        while (stream >> tempNum) {
            Stack.push_front(tempNum);
        }
        for (deque<int>::iterator it = Stack.begin(); it != Stack.end(); it++) {
            deque<int>::iterator iMax = max_element(it, Stack.end());
            if (iMax != it) {
                if (iMax != Stack.end() - 1) {
                    reverse(iMax, Stack.end());
                    cout << distance(Stack.begin(), iMax) + 1 << ' ';
                }
                reverse(it, Stack.end());
                cout << distance(Stack.begin(), it) + 1 << ' ';
            }
        }
        cout << '0' << endl;
    }

    ///
    return 0;

}
