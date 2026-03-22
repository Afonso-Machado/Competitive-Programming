#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i = 1;

    while (scanf("%d", &N)) {
        if (N == 0) break;

        int res = 0;
        while (N--) {
            int x;
            cin >> x;
            if (x == 0) res--;
            else res++;
        }
        printf("Case %d: %d\n", i++, res);
    }

    return 0;
}
