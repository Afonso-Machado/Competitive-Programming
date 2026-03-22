#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        char pages[20][101];
        int ranks[20];
        // Read and find higher value
        int max = 0;
        for (int k = 0; k < 10; k++) {
            scanf("%s %d", pages[k], &ranks[k]);
            if (max < ranks[k]) max = ranks[k];
        }

        printf("Case #%d:\n", i+1);
        for (int k = 0; k < 10; k++) {
            if (ranks[k] == max) {
                printf("%s\n", pages[k]);
            }
        }
    }

    return 0;
}
