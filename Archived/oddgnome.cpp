#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int g, prev;
        cin >> g >> prev;
        bool found =  false;

        for (int i = 1; i < g; i++) {
            int x;
            cin >> x;

            if (x != prev+1 && !found) {
                cout << i+1 << endl;
                found = true;
            } else prev = x;
        }
    }

    return 0;
}
