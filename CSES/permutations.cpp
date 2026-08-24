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

    int n;
    cin >> n;

    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    else {
        for(int i = 2; i <= n; i+=2) {
            cout << i << " ";
        }
        for(int i = 1; i <= n; i+=2) {
            cout << i << " ";
        }
    }
    return 0;
}