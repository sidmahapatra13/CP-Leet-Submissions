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
        vector<int> b(n), ans;

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        ans.pb(b[0]);
        for(int i = 0; i < n; i++) {
            if(b[i] > b[i-1]) {
                ans.pb(b[i]);
            }
            else {
                ans.pb(b[i]);
                ans.pb(b[i]);
            }
        }
        cout << ans.size() << endl; 
        for (auto it : ans) 
            cout << it << " ";
        cout << endl; 
    }
    return 0;
}