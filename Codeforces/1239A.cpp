#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
 
long long n, m;
long long dp[100005];
 
int main() {
    dp[1] = 2;
    dp[2] = 4;
    for (int i = 3; i <= 1e5; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }
    
    while (cin >> n >> m) {
        cout << (dp[n] + dp[m] - 2 + MOD) % MOD << endl;
    }
 
    return 0;
}
