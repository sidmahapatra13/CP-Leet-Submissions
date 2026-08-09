#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        vector<long long> height(n);

        for(int i = 0; i < n; i++) {
            cin >> height[i];
        }

        long long sum = 0;
        long long minSwipe = LLONG_MAX;
        for(long long i = 0; i < n; i++) {
            sum += height[i];
            minSwipe = min(minSwipe, sum/(i+1));
            cout << minSwipe << " ";
        }
        cout << "\n";
    }
    return 0;
}