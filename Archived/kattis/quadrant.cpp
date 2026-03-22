#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0) printf("1\n");
    if (x < 0 && y > 0) printf("2\n");
    if (x < 0 && y < 0) printf("3\n");
    if (x > 0 && y < 0) printf("4\n");

    return 0;
}
