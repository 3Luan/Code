#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    bool prime[n + 1];
    int count = 0;
    int temp = 2;
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 3; temp + p + 1 <= n; p++)
    {
        if (prime[p] == true)
        {
            if (prime[temp + p + 1] == true)
            {
                count++;
            }
            temp = p;
        }
    }

    if (count >= k)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}