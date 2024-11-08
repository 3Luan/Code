#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> angles(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> angles[i];
    }

    vector<bool> dp(360, false);
    dp[0] = true; // Bắt đầu từ vị trí 0

    for (int i = 0; i < n; ++i)
    {
        vector<bool> new_dp(360, false);

        for (int j = 0; j < 360; ++j)
        {
            if (dp[j])
            {
                new_dp[(j + angles[i]) % 360] = true;
                new_dp[(j - angles[i] + 360) % 360] = true;
            }
        }

        dp = new_dp;
    }

    if (dp[0])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}