#include <bits/stdc++.h>
using namespace std;

int a[300], b[300];

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    
    int ans = 0;
    for (int i = 0; i < (1 << 9); i++) {
        int mk = 0;
        for (int j = 1; j <= n; j++) {
            int flag = 0;
            for (int k = 1; k <= m; k++) {
                int x = a[j] & b[k];
                for (int g = 0; g <= 9; g++) {
                    if ((x & (1 << g)) && !(i & (1 << g))) {
                        flag++;
                        break;
                    }
                }
            }
            if (flag == m) {
                mk = 1;
                break;
            }
        }
        if (!mk) {
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;
    return 0;
}

