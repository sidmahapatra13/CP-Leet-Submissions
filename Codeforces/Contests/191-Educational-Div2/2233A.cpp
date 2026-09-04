#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, x, y, z;
        cin >> n >> x >> y >> z;

        int scen1 = (n + (x + y) - 1) / (x+y);

        int scen2;

        if(x*z >= n) {
            scen2 = (n+x-1) / x;
        }
        else {
            int rem = n - x*z;
            scen2 = z + (rem + (x + 10 * y) - 1) / (x + 10 * y);
        }
        cout << min(scen1, scen2) << endl;
    }
    return 0;
}