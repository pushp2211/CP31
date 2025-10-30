#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        string a, b;
        cin >> a >> b;

        if (a.size() < b.size()) swap(a, b);

        int len = 0;

        //
        for (int i = 0; i < b.size(); i++) {
            for (int j = i; j < b.size(); j++) {
                string sub = b.substr(i, j - i + 1); //start and size
                if (a.find(sub) != string::npos) {
                    len = max(len, (int)sub.size()); //not breaking but checking all and storing max
                }
            }
        }

        int ans = (a.size() - len) + (b.size() - len);
        cout << ans << endl;
    }
    return 0;
}
