#include <bits/stdc++.h>
using namespace std;

int n;
vector<double> ap, aw;
double r=0.0;

void check(int index, double p, double w) {
    if (index == n) {
        if(r<(p*w)){
          r = p*w;
        }
      return;
    }
    
    check(index + 1, p, w);
    check(index + 1, p * (ap[index] / 100.0), w + aw[index]);
}

int main() {
    cin >> n;
    ap.resize(n);
    aw.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> ap[i] >> aw[i];
    }
    
    check(0, 1.0, 0.0);
    cout << fixed << setprecision(8) << r << endl;

    return 0;
}
