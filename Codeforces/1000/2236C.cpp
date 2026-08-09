#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        ll a, b, x;
        cin >> a >> b >> x;

        vector<pll> A, B;
        {
            ll cur = a;
            ll cost = 0;

            while(true) {
                A.pb({cur, cost});
                if(cur==0) break;
                cur /= x;
                cost++;
            }
        }

        {
            ll cur = b;
            ll cost = 0;

             while(true) {
                B.pb({cur, cost});
                if(cur==0) break;
                cur /= x;
                cost++;
            }
        }

        ll ans = LLONG_MAX;

        for(auto [u, costa] : A) {
            for(auto [v, costb] : B) {
                ans = min(ans, costa + costb + abs(u - v));
            }
        }
        cout << ans << endl;
    }
    return 0;
}