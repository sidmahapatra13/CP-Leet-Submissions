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

        int ans = n;
        int left = 0, right = n - 1;

        while(left <= right) {
            if(s[left] != s[right]) {
                ans -= 2;
            }
            else {
                break;
            }
            left++;
            right--;
        }
        cout << ans << endl;
    }
    return 0;
}