#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int sum = 0;
    for (int i = 0; i < t; i++) {
        float length, width, depth, weight;
        cin >> length >> width >> depth >> weight;

        if (weight > 7) {
            printf("0\n");
        } else if (length > 56 || width > 45 || depth > 25) {
            if (length + width + depth > 125) {
                printf("0\n");
            } else {
                printf("1\n");
                sum++;
            }
        } else {
            printf("1\n");
            sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}
