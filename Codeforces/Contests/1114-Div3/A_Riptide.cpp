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
        vector<int> tokens = {a, b, c};
        
        int cnt = 0;
        while(tokens[0] != tokens[1] && tokens[1] != tokens[2] && tokens[2] != tokens[0]) {
            sort(all(tokens));
            tokens[2]--;
            tokens[0]++;
            
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}