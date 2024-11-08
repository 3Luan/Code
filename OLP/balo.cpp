#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    
    vector<int> weights(n), values(n);
    
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(b + 1, 0));
    
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= b; w++) {
            dp[i][w] = dp[i - 1][w];
            
            if (w >= weights[i - 1]) {
                dp[i][w] = max(dp[i][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            }
        }
    }
    
    int max_value = dp[n][b];
    
    int remaining_weight = b;
    int item_count = 0;
    
    for (int i = n; i > 0 && remaining_weight >= 0; i--) {
        if (dp[i][remaining_weight] != dp[i - 1][remaining_weight]) {
            item_count++;
            remaining_weight -= weights[i - 1];
        }
    }
    
    cout << item_count << endl;
    cout << (b - remaining_weight) << " " << max_value << endl;

    return 0;
}

