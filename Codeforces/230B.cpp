#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

bool isPrime(ll n)
{
    if (n < 2)
    {
        return false;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool sumOfDivisors(ll n)
{
    ll root = sqrt(n);
    if (root * root == n && isPrime(root))
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    vector<ll> arr;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (sumOfDivisors(arr[i]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}