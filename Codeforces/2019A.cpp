#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
      int n;
      int a1mx = 0, a2mx = 0;

      cin>>n;
      
      for(int i=0; i<n; i++){
        int k;
        cin>>k;
        
        if(i%2==0){
          a1mx = max(a1mx, k);
        }else{
          a2mx = max(a2mx, k);
        }
      }
      
      if(n%2==0){
        cout << max(a1mx + n/2, a2mx + n/2) << endl;
      }else{
        cout << max(a1mx + n/2 + 1, a2mx + n/2) << endl;
      }
    }
   
    return 0;
}
