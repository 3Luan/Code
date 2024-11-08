#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

void findSubsets(vector<int> &arr, int idx, ll sum, int minVal, int maxVal, int &count, ll l, ll r, int x, int elements)
{
    if (elements >= 2 && sum >= l && sum <= r && (maxVal - minVal) >= x)
    {
        count++;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        findSubsets(arr, i + 1, sum + arr[i], min(minVal, arr[i]), max(maxVal, arr[i]), count, l, r, x, elements + 1);
    }
}

ll result(vector<int> arr, ll l, ll r, int x)
{
    int count = 0;
    sort(arr.begin(), arr.end());
    findSubsets(arr, 0, 0, INT_MAX, INT_MIN, count, l, r, x, 0);
    return count;
}

int main()
{
    int n, x;
    ll l, r;

    cin >> n >> l >> r >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << result(arr, l, r, x) << endl;

    return 0;
}