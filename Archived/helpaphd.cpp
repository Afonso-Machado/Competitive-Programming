#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    char *line = NULL;
    size_t len = 0;

    getline(&line, &len, stdin);

    while(n--) {

        getline(&line, &len, stdin);
        
        if (strchr(line, '+')) {
            int a, b;
            sscanf(line, "%d+%d", &a, &b);
            printf("%d\n", a+b);
        } else {
            cout << "skipped\n";
        }
    }
        
    return 0;
}
