#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        set<pair<int, int>> king_hits, queen_hits;

        for(int i = 0; i < 4; i++) {

            king_hits.insert({xk+dx[i]*a, yk + dy[i]*b});
            king_hits.insert({xk+dx[i]*b, yk + dy[i]*a});

            queen_hits.insert({xq+dx[i]*a, yq + dy[i]*b});
            queen_hits.insert({xq+dx[i]*b, yq + dy[i]*a});
        }

        int ans = 0;
        for(auto it : king_hits) {
            if(queen_hits.find(it) != queen_hits.end()) {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}