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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (k >= 2) {
            cout << "YES" << endl;
        }
        else {
            bool sorted = true;
            for(int i = 0; i < n-1; i++) {
                if(a[i] > a[i+1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted && k == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}