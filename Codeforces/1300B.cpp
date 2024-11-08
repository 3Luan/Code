#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(2 * n);
        
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll median1 = a[n - 1];
        ll median2 = a[n];

        if(median1 == median2){
            cout<<0<<endl;
        }else{
            ll abs = (median1 > median2) ? (median1 - median2) : (median2 - median1);
            cout << abs << endl;
        }
    }

    return 0;
}
