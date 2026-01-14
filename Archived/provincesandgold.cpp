#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, s, c;
    scanf("%d %d %d", &g, &s, &c);

    int money = g * 3 + s * 2 + c * 1;

    if (money >= 8)
        printf("Province or Gold\n");
    else if (money >= 6)
        printf("Duchy or Gold\n");
    else if (money >= 5)
        printf("Duchy or Silver\n");
    else if (money >= 3)
        printf("Estate or Silver\n");
    else if (money >= 2)
        printf("Estate or Copper\n");
    else
        printf("Copper\n");

    return 0;
}
