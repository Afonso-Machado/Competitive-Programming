#include <bits/stdc++.h>
using namespace std;

int main() {

    int p, a, b, c, d, n;

    while (scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) != EOF) {
        double array[1000000];

        for (int i = 1; i <= n; i++) {
            array[i] = p * (sin(a*i+b) + cos(c*i +d) + 2);
        }

        double drop = 0;
        double current_value = array[1];

        for (int i = 2; i <= n; i++) {
            if (array[i] >= current_value) {
                current_value = array[i];
            } else {
                if (current_value - array[i] > drop) drop = current_value - array[i];
            }
        }

        printf("%f\n", drop);
    }

    return 0;
}
