#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

#define rep(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
using namespace std;

const int maxn = 100010;
int f[maxn], rev[maxn], P, N, p[20], cnt, num[maxn][20];

int qpow(int a, int x)
{
    int res = 1;
    while (x)
    {
        if (x & 1)
            res = (ll)res * a % P;
        a = (ll)a * a % P;
        x >>= 1;
    }
    return res;
}

void solve()
{
    int phi = P, tp = P;
    f[0] = rev[0] = 1;

    for (int i = 2; i <= tp / i; i++)
    {
        if (tp % i == 0)
        {
            p[++cnt] = i;
            phi = phi / i * (i - 1);
            while (tp % i == 0)
                tp /= i;
        }
    }

    if (tp > 1)
    {
        phi = phi / tp * (tp - 1);
        p[++cnt] = tp;
    }

    rep(i, 1, N)
    {
        int x = i;
        rep(j, 1, cnt)
        {
            num[i][j] = num[i - 1][j];
            while (x % p[j] == 0)
            {
                num[i][j]++;
                x /= p[j];
            }
        }
        f[i] = (ll)f[i - 1] * x % P;
        rev[i] = qpow(f[i], phi - 1);
    }
}

int C(int x, int y)
{
    if (y < 0)
        return 0;
    int res = 1;
    res = (ll)f[x] * rev[y] % P * rev[x - y] % P;
    rep(i, 1, cnt) res = (ll)res * qpow(p[i], num[x][i] - num[y][i] - num[x - y][i]) % P;
    return res;
}

int main()
{
    int L, R, ans = 0;
    cin >> N >> P >> L >> R;
    R = min(N, R);
    solve();

    rep(i, 0, N - L)
    {
        ans = (ans + 1LL * (C(N - i, (N - i - L) >> 1) - C(N - i, (N - i - R - 1) >> 1)) * C(N, i)) % P;
    }

    cout << ans << endl;
    return 0;
}