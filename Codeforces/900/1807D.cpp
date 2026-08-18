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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll sum_initial = 0;
        for(int i = 0; i < n; i++) {
            sum_initial += a[i];
        }

        vector<long long> prefix_sum(n + 1, 0);
		for (int i = 1; i <= n; i++) {
			prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
        }

        while(q--) {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum_remove = prefix_sum[r] - prefix_sum[l - 1];
            ll sum_add = (r - l + 1) * k;
            ll total_sum = sum_initial - sum_remove + sum_add;
            if (total_sum % 2 == 1)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
        }
    }
    return 0;
}