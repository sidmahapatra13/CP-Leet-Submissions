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

        int two_total = 0;
        int two_curr = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == 2) {
                two_total++;
            }
        }

        int ans = -1;

        for(int i = 0; i < n; i++) {
            if(a[i] == 2) {
                two_curr++;
            }

            if(two_curr == (two_total - two_curr)) {
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}