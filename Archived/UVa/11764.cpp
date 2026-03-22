#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i = 1;
    cin >> t;

    while (t--) {
        int N, high = 0, low = 0, prev = 0;
        cin >> N >> prev;
        N--;

        while (N--) {
            int h;
            cin >> h;

            if (prev < h) high++;
            if (prev > h) low++;
            prev = h;
        }

        printf("Case %d: %d %d\n", i++, high, low);
    } 

    return 0;
}
