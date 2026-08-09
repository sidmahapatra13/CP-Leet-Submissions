#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    vector<int> a;

    int x;
    queue<int> q;
    for(int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
        q.push(i+1);
    }

    int last = 0;
    while (!q.empty()) {
        int child = q.front();
        a[child - 1] -= m;

        if(a[child - 1] > 0) {
            q.pop();
            q.push(child);
        }
        else {
            last = child;
            q.pop();
        }
    }

    cout << last;
    return 0;
}
