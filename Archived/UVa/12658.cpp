#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string line;
    for (int i = 0; i < 4; i++) {
        getline(cin, line);
    }

    for (int i = 0; i < n; i++) {
        string digit = line.substr(i*4,3);
        if (digit.compare(".*.") == 0) {
            printf("1");
        }
        if (digit.compare("*..") == 0) {
            printf("2");
        }
        if (digit.compare("..*") == 0) {
            printf("3");
        }
    }
    printf("\n");

    return 0;
}
