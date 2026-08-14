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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if( d < b) {
            cout << -1 << endl;
        }
        
        ll diag = d - b;
        ll new_a = a + diag;
        if(c > new_a) {
            cout << -1 << endl;
        }
        else {
            ll left = new_a - c;
            cout << diag + left << endl;
        }
    }
    return 0;
}