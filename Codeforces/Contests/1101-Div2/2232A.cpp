#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> friends(n);

        for(int i = 0;i < n;i++) {
            cin >> friends[i];
        }

        sort(friends.begin(), friends.end());
        int ans = n;

        for(int i = 0; i < n; ) {
            int j = i;
            while(j<n && friends[j] == friends[i]) ++j;

            int L = i;
            int R = n - j;

            ans = min(ans, max(L,R));
            i = j;
        }
        for (int i = 0; i + 1 < n; ++i) {
            if (friends[i] != friends[i + 1]) {
                int L = i + 1;
                int R = n - L;
                ans = min(ans, max(L, R));
            }
        }
        cout << ans << '\n';
    }

    return 0;
}