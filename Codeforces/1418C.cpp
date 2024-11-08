#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll x, n, cnt = 0, sum = 0;
    cin >> n >> sum;
    n--;
    
    while (n--) {
        cin >> x;
        if (x)
            cnt++;
        else {
            sum += cnt / 3;
            cnt = 0;
        }
    }
    cout << sum + (cnt / 3) << endl;
    return;
}

int main() {
    ll t = 1;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}

