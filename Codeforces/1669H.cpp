#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  
  for (int z = 0; z < t; z++) {
    int n, k;
    cin >> n >> k;
    vector<bitset<31>> a(n);
    bitset<31> ans(INT_MAX);
    
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      a[i] = bitset<31>(num); // Khởi tạo dưới dạng bit
      ans &= a[i];
    }
    
    for (int i = 30; i > -1; i--) {
      int count = 0;
      
      for (int j = 0; j < n; j++) {
        if (a[j].test(i) == 0) {
          count++;
        }
      }
      
      if (count <= k) {
        k -= count;
        ans.set(i); // Đặt bit thứ i trong ans là 1
      }
    }
    cout << ans.to_ulong() << endl;
  }
  
  return 0;
}