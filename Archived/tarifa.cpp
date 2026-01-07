#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, res = 0;
    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        res += x - p;
    }

    printf("%d\n", res + x);

    return 0;
}
