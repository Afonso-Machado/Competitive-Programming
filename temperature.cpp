#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 1) {
        printf("ALL GOOD\n");
        return 0;
    }

    if (x != 0 && y == 1) {
        printf("IMPOSSIBLE\n");
        return 0;
    }

    printf("%f\n", (float)(x / (1.0 - y)));

    return 0;
}
