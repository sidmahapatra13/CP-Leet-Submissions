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
        ll y, x;
        cin >> y >> x;

        ll ans;

        if(x > y) {
            //We are on the right
            if(x % 2 ==1) {
                ans = x*x - y + 1;
            }
            else {
                ans = (x-1)*(x-1) + y;
            }
        }
        else {
            //We are on the bottom
            if(y % 2 == 0) {
                ans = y*y - x + 1;
            }
            else {
                ans = (y-1)*(y-1) + x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}