#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main()
{
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<ll> arr(2001);

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        ll s = 0;
        for (int j = 0; j < n; j++)
        {
            s ^= arr[j];
        }

        if (s == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll a = 0;
            ll b = 0;
            for (int j = 0; j < n; j++)
            {
                a ^= arr[j];
                if (a == s)
                {
                    b++;
                    a = 0;
                }
            }

            if (b >= 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}