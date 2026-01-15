#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 1;
    cin >> t;

    while (t--) {
        int l, w, h;
        cin >> l >> w >> h;

        (l <= 20 && w <= 20 && h <= 20) ? printf("Case %d: good\n", i++) : printf("Case %d: bad\n", i++); 
    }

    return 0;
}
