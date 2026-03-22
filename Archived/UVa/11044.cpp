#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", (int)(ceil((float)(n-2)/3) * ceil((float)(m-2)/3)));
    }

    return 0;
}
