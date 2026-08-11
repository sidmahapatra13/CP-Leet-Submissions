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
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;

        bool found = false;
        int cnt = 0;
        for(int i = 0; i < 5; i++) {
            if(x.find(s) != string::npos) {
                found = true;
                break;
            }
            else {
                x += x;
                cnt++;
            }
        }
        if(x.find(s) != string::npos) found = true;
        if(found) cout << cnt << endl;
        else cout << -1 << endl;
    }

    return 0;
}