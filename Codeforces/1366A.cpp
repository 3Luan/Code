#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

ll min3(ll x, ll y, ll z) {
    return min(x, min(y, z));
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        cout << min3(a, b, (a + b) / 3) << endl;
    }

    return 0;
}
