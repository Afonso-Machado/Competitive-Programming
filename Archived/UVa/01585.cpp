#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string s;
        getline(cin, s);

        int counter = 1, res = 0;
        for (char c : s) {
            if (c == 'O') {
                res += counter;
                counter++;
            } else if (c == 'X') {
                counter = 1;
            }
        }
        printf("%d\n", res);
    }

    return 0;
}
