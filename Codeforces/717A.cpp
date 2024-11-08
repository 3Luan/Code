#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
const ll mod = 1000000007;

vector<ll> fact;
vector<ll> inv_fact;

ll power(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return ans % mod;
}

void cal_fact(ll r)
{
    fact.resize(r + 1);
    inv_fact.resize(r + 1);

    fact[0] = 1;
    for (ll i = 1; i <= r; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }

    for (ll i = 0; i <= r; i++)
    {
        inv_fact[i] = power(fact[i], mod - 2);
    }
}

ll bin(ll a, ll b)
{
    if (a < b || b < 0)
        return 0;
    return (fact[a] % mod * inv_fact[b] % mod * inv_fact[a - b] % mod) % mod;
}

ll cal_fib(int n)
{
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;

    ll a = 2, b = 3;
    ll c;
    for (int i = 3; i <= n; i++)
    {
        c = (a + b) % mod;
        a = b;
        b = c;
    }
    return b;
}

ll result(int k, ll l, ll r)
{
    ll s = 0;

    for (ll i = l; i <= r; i++)
    {
        ll count = cal_fib(i);
        s = (s + bin(count, k)) % mod;
    }

    return s;
}

int main()
{
    int k;
    ll l, r;

    cin >> k >> l >> r;

    ll max_fib_value = cal_fib(r);

    cal_fact(max_fib_value);

    cout << result(k, l, r);

    return 0;
}