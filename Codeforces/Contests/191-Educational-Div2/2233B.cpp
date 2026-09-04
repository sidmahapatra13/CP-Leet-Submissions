#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a;

        for (int i = 1; i <= n; i++) a.push_back(i);

        for (int i = 1; i <= n; i++) a.push_back(i);

        for (int i = 2; i <= n; i++) a.push_back(i);
        a.push_back(1);

        for (int i = 1; i <= n; i++) a.push_back(i);

        for (int i = 0; i < (int)a.size(); i++) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}