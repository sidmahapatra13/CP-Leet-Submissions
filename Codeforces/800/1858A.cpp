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
        int a, b, c;
        cin >> a >> b >> c;

        if(c % 2 != 0) {
            if(b > a) {
                cout << "Second" << endl;
            }
            else {
                cout << "First" << endl;
            }
        }
        else {
            if(b >= a) {
                cout << "Second" << endl;
            }
            else {
                cout << "First" << endl;
            }
        }
    }
    return 0;
}