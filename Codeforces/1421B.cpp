#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ll;
 
int main()
{
    
    ll t, a, b;
    
    cin>>t;
    
    for(int i=0; i<t; i++){
        ll a,b;
        
        cin>>a>>b;
        
        cout<<(a ^ b) << endl;
    }
 
    return 0;
}