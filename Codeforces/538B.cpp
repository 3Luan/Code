#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> r;
    
    while(n>0){
        int s = 0;
        int temp = n;
        
        for(int j=1; j<=n; j*=10){
            if(temp%10 > 0){
                s+=j;
            }
            
            temp/=10;
        }
        
        r.push_back(s);
        n-=s;
    }
    
    cout<<r.size()<<endl;
    for (int i : r) {
        cout << i << " ";
    }
    
    return 0;
}
