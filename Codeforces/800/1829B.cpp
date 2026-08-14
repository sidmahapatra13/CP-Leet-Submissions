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
        vector<int>a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cnt = 0;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                cnt++;
                mx = max(mx, cnt);
            }
            else {
                cnt = 0;
            }
        }
        mx = max(mx, cnt);
        cout << mx << endl;
    }
    return 0;
}