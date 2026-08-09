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

        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        for(int i = 0; i < sz(a); i++) {
            cin >> a[i];
        }

        int max_diff = INT_MIN;

        int first = a[0];
        max_diff = max(max_diff, first);

        for(int i = 0; i < n-1; i++) {
            int diff = a[i+1] - a[i];
            max_diff = max(max_diff, diff);
        }
        int last = (x - a[n-1])*2;
        max_diff = max(max_diff, last);

        cout << max_diff << endl;
    }

    return 0;
}