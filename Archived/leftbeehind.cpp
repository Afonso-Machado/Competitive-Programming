#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    while (x != 0 || y != 0) {
        if (y + x == 13) {
            printf("Never speak again.\n");
            cin >> x >> y;
            continue;
        }

        if (y > x) {
            printf("Left beehind.\n");
        }

        if (x > y) {
            printf("To the convention.\n");
        }

        if (x == y) {
            printf("Undecided.\n");
        }

        cin >> x >> y;
    }

    return 0;
}
