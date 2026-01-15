#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 1;
    while (scanf("%d", &n) > 0) {
        int x, min = 2000000, max = -2000000;
        while (n--) {
            cin >> x;
            if (x > max) max = x;
            if (x < min) min = x;
        }

        printf("Case %d: %d %d %d\n", i++, min, max, max - min);
    }

    return 0;
}
