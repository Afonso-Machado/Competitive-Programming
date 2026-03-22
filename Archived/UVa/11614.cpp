#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    unsigned long m;

    scanf("%d", &n);

    while (n--) {
        scanf("%lu", &m);
        unsigned long res;
        res = (-1 + (unsigned long)sqrt(1 + 8 * m)) / 2;
        printf("%lu\n", res);
    }

    return 0;
}
