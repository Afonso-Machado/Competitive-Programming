#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        int x;
        scanf("%d", &x);

        x % 2 == 0 ? printf("%d is even\n", x) : printf("%d is odd\n", x);
    }

    return 0;
}
