#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int p = 0;
        int moves[100];
        string word;
        for (int k = 0; k < n; k++) {
            cin >> word;
            if (word.compare("LEFT") == 0) {
                p -= 1;
                moves[k] = -1;
            } else if (word.compare("RIGHT") == 0) {
                p += 1;
                moves[k] = 1;
            } else {
                cin >> word;
                int temp;
                cin >> temp;
                p += moves[temp - 1];
                moves[k] = moves[temp - 1];
            }
        }
        printf("%d\n", p);
    }

    return 0;
}
