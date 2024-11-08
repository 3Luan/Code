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
        b = b >> 1;
        a = (a * a) % mod;
    }
    return (ans % mod);
}

void cal_fact()
{
    ll ans = 1ll;
    fact[0] = 1ll;
    for (ll i = 1; i <= 1000000; i++)
    {
        ans = (ans * i) % mod;
        fact[i] = ans;
    }
}

bool check_good(ll sum, ll a, ll b)
{
    while (sum)
    {
        if (!((sum % 10 == a) || (sum % 10 == b)))
        {
            return false;
        }
        sum = sum / 10;
    }
    return true;
}

int main()

{
    ll a, b, n;
    ll ans = 0ll;

    cal_fact();

    cin >> a >> b >> n;

    for (ll i = 0; i <= n; i++)
    {
        ll sum = a * i + (b * (n - i));
        if (check_good(sum, a, b))
        {
            ll up = fact[n] % mod;
            ll down = (fact[i] * fact[n - i]) % mod;
            ll res = (up * (power(down, mod - 2) % mod)) % mod;
            ans = (ans + res) % mod;
        }
    }

    cout << ans << endl;

    return 0;
}