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
    vector<int> a(n);

    int min_element = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        min_element = min(min_element, abs(a[i]));
    }

    cout << min_element << endl;

    return 0;
}