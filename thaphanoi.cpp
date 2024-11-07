#include <iostream>
using namespace std;

int a[3] = {0};

void move(int n, int x, int y, int z, int &k) {
    if (k == 0) return;
    if (n == 1) {
        if (k > 0) {
            k--;
            a[x]--;
            a[z]++;
        }
    } else {
        move(n - 1, x, z, y, k);
        if (k > 0) {
            a[x]--;
            a[z]++;
            k--;
        }
        move(n - 1, y, x, z, k);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    a[0] = n;

    move(n, 0, 2, 1, k);

    for (int i = 0; i <= 2; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

