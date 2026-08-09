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
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> freq_map;
        for(int i = 0; i < n; i++) {
            freq_map[a[i]]++;
        }

        if(freq_map.size() >= 3) cout << "No" << endl;
        else {
            //Get frequency of smallest and larget elements
            int freq1 = freq_map.begin()->second;
            int freq2 = freq_map.rbegin()->second;

            if(freq1 == freq2) cout << "Yes" << endl;
            else if (n % 2 == 1 && abs(freq1 - freq2) == 1) {
                cout << "Yes" << endl; // If the array length is odd and the frequency difference is 1
            } 
            else{
                cout << "No" << endl;    
            }
        }
    }
    return 0;
}