#include <bits/stdc++.h>
using namespace std;

int main() {
    int B, N;
    scanf("%d %d\n", &B, &N);
    while (B != 0 || N != 0) {
        int banks[20];
        // First Line
        for (int i = 0; i < B; i++) {
            cin >> banks[i];
        }
        // Transactions
        for (int i = 0; i < N; i++) {
            int a, b, value;
            cin >> a >> b >> value;
            banks[a-1] -= value;
            banks[b-1] += value;
        }
        bool has_negative = false;
        for (int i = 0; i < B; i++) {
            if (banks[i] < 0) has_negative = true;
        }

        has_negative ? printf("N\n") : printf("S\n");
        cin >> B >> N;
    }

    return 0;
}
