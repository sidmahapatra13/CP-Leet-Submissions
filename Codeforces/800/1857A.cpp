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

        int odd_cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 != 0) {
                odd_cnt++;
            }
        }

        if (odd_cnt % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}