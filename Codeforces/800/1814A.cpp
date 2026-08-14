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
        ll n,k;
        cin >> n >> k;

        if(n % k == 0 || (n-k) % 2 == 0) cout << "YES" << endl;
        else if (n == k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}