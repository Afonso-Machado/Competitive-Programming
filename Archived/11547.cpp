#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        printf("%d\n", abs((315*n + 36962)/10 % 10));
    }

    return 0;
}
