#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n + 1), dp(n + 1, -1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        ll max_score = 0;

        for (int i = n; i >= 1; i--) {
            int jump = i + a[i];
            if (jump > n) {
                dp[i] = a[i];
            } else {
                dp[i] = a[i] + dp[jump];
            }
            max_score = max(max_score, dp[i]);
        }

        cout << max_score << endl;
    }

    return 0;
}
