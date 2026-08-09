#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    priority_queue<int> mx; //Max Heap
    priority_queue<int, vector<int>, greater<int>> mn; //Min Heap

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        mx.push(x);
        mn.push(x);
    }

    long long maxAns = 0, minAns = 0;

    {
        auto pq = mx;
        int passengers = n;

        while(passengers--) {
            int x = pq.top();
            pq.pop();

            maxAns += x;

            if(x>1) {
                pq.push(x-1);
            }
        }
    }
    
    {
        auto pq = mn;
        int passngers = n;

        while(passngers--) {
            int x = pq.top();
            pq.pop();

            minAns += x;

            if(x > 1) {
                pq.push(x-1);
            }
        }
    }

    cout << maxAns << " " << minAns;
    
    return 0;
}