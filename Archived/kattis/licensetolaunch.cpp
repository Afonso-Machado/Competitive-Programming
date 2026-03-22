#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, best, day = 0;
    cin >> n >> best;
    n--;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x < best) {
            best = x;
            day = i;
        }
    }
    cout << day << endl;

    return 0;
}
