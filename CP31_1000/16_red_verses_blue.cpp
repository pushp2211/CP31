#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,r,b;
        cin >>n>>r>>b;

        string s;
        int parts = b + 1;
        int base = r / parts;
        int extra = r % parts;

        for (int i = 0; i < parts; i++) {
           s += string(base + (extra > 0), 'R');
            if (extra > 0) extra--;
            if (b > 0) {
                s += 'B';
                b--;
        }
        }
        cout << s << endl;
    }
    return 0;
}
