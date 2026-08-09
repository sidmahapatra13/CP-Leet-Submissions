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
        string s;
        cin >> s;

        int max_consecutive = INT_MIN;
        int consecutive = 0;
        int cnt = 0;
        for(char c : s) {
            if(c == '.') {
                cnt++;
                consecutive++;
                max_consecutive=max(max_consecutive,consecutive);
            }
            else {
                consecutive = 0;
            }
        }
        if (max_consecutive >= 3) cout << 2 << endl;
        else if (cnt == 0) cout << 0 << endl;
        else cout << cnt << endl;
    }

    return 0;
}