#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 1;
    string s;
    cin >> s;

    while (s.compare("#") != 0) {

        if (s.compare("HELLO") == 0) {
            cout << "Case " << i++ << ": ENGLISH\n";
            cin >> s;
            continue;
        }

        if (s.compare("HOLA") == 0) {
            cout << "Case " << i++ << ": SPANISH\n";
            cin >> s;
            continue;
        }

        if (s.compare("HALLO") == 0) {
            cout << "Case " << i++ << ": GERMAN\n";
            cin >> s;
            continue;
        }

        if (s.compare("BONJOUR") == 0) {
            cout << "Case " << i++ << ": FRENCH\n";
            cin >> s;
            continue;
        }

        if (s.compare("CIAO") == 0) {
            cout << "Case " << i++ << ": ITALIAN\n";
            cin >> s;
            continue;
        }

        if (s.compare("ZDRAVSTVUJTE") == 0) {
            cout << "Case " << i++ << ": RUSSIAN\n";
            cin >> s;
            continue;
        }

        cout << "Case " << i++ << ": UNKNOWN\n";
        cin >> s;
    }
    

    return 0;
}
