#include <bits/stdc++.h>
using namespace std;

int main() {
    char month[4];
    int day;
    scanf("%s %d", month, &day);
    if ((strcmp(month, "OCT") == 0 && day == 31) || 
        (strcmp(month, "DEC") == 0 && day == 25)) {
        printf("yup\n");
    } else {
        printf("nope\n");
    }
    return 0;
}
