#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll mod = 1000000007;
ll fact[1000001];

ll power(ll a, ll b)
{
    ll ans = 1ll;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return ans % mod;
}

void cal_fact()
{
    fact[0] = 1ll;
    for (ll i = 1; i <= 1000000; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

ll bin(ll a, ll b)
{
    ll up = fact[a] % mod;
    ll down = (fact[b] * fact[a - b]) % mod;

    return (up * power(down, mod - 2)) % mod;
}

ll result(ll n, ll k)
{
    if (k == 0 || n == 1)
    {
        return n;
    }

    vector<ll> s(k + 1);
    ll temp;

    for (ll i = 1; i <= k; i++)
    {
        if (i == 1)
        {
            s[i] = (n * (n + 1) / 2) % mod;
        }
        else
        {
            temp = (power(n + 1, i + 1) - 1 - n + mod) % mod;

            for (ll j = 1; j < i; j++)
            {
                temp = (temp - (s[i - j] * bin(i + 1, j + 1)) % mod + mod) % mod; // Tránh giá trị âm
            }

            temp = (temp * power(i + 1, mod - 2)) % mod;

            s[i] = temp;
        }
    }

    return s[k] % mod;
}

int main()
{
    ll n, k;
    cal_fact();

    cin >> n >> k;

    cout << result(n, k);

    return 0;
}
