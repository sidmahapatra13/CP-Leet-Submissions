#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int x, k;
        cin >> x >> k;

        if (k > x) {
            cout << 1 << endl;
            cout << x << endl;
        }
        else if (x %k != 0) {
            cout << 1 << endl;
            cout << x << endl;
        }
        else {
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
    }
    return 0;
}