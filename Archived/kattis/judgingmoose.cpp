#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    scanf("%d %d", &l, &r);
    
    if (l == 0 && r == 0) {
        printf("Not a moose");
        return 0;
    }

    if (l == r) {
        printf("Even %d", l * 2);
    } else {
        int max_tines = l > r ? l : r;
        printf("Odd %d", max_tines * 2);
    }

    return 0;
}
