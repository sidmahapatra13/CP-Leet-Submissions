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
        vector<ll> a(n), b, c;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll mx = *max_element(a.begin(), a.end());
        for(int i = 0; i < n; i++) {
            if(a[i] != mx) {
                b.pb(a[i]);
            }
            else {
                c.pb(a[i]);
            }
        }
        if (b.size() == 0) cout << -1 << endl;
        else {
            cout << b.size() << " " << c.size() << endl;
            for (auto it : b)
                cout << it << " ";
            cout << endl;
            for (auto it : c)
                cout << it << " ";
            cout << endl;
        }
    }
    return 0;
}