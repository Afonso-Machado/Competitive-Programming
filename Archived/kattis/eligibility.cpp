#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        char name[40];
        int post, birth, c;
        scanf("%s %d/%*d/%*d %d/%*d/%*d %d", name, &post, &birth, &c);
        
        if (post >= 2010) {
            printf("%s eligible\n", name);
            continue;
        }

        if (birth >= 1991) {
            printf("%s eligible\n", name);
            continue;
        }

        if (c > 5 * 8) {
            printf("%s ineligible\n", name);
            continue;
        }

        printf("%s coach petitions\n", name);
    }

    return 0;
}
