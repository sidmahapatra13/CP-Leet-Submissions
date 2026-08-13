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
        vector<ll> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long operations = INT_MAX;
        for(int i = 0; i < n-1; i++) {
            if(a[i] <= a[i+1]) {
                long long diff = a[i+1] - a[i];
                long long required_diff = diff/2 + 1;
                operations = min(operations, required_diff); 
            }
            else {
                operations = 0;
            }
        }
        cout << operations << endl;
    }

    return 0;
}