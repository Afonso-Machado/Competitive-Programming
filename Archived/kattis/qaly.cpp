#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float sum = 0.0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        float q, y;
        scanf("%f %f", &q, &y);
        sum += (q * y);
    }
    printf("%.3f\n", sum);
    return 0;
}
