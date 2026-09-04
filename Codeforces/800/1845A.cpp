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
        int n, k, x;
        cin >> n >> k >> x;

        if(x!=1) {
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else {
            if(k == 1 || (k == 2 && n % 2 == 1) || n == 1) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
                if(n % 2 == 0) {
                    cout << n / 2 << endl;
                    for(int i = 0; i < n; i += 2) {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else {
                    cout << (n - 3) / 2 + 1 << endl;
                    for (int i = 1; i <= (n - 3) / 2; i++) // Output (n-3)/2 number of 2s
                        cout << 2 << " ";
                    cout << 3 << endl; // Output a 3 to make the sum n
                }
            }
        }
    }
    return 0;
}