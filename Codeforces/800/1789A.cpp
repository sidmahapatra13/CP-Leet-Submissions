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
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ok = false;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(gcd(a[i], a[j]) <= 2) {
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
        cout << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}